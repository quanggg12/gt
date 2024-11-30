#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s){
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
        else{
            if(st.empty()) return false;
            char c = st.top(); st.pop();
            if(s[i] == ')' && c != '(') return false;
            if(s[i] == '}' && c != '{') return false;
            if(s[i] == ']' && c != '[') return false;
        }
    }
    return st.empty();
}

string s = "()[]{}";
string res;
vector<string> ans;
int n;

void Try(int i){
    for(int j = 0; j < s.size(); j++){
        res += s[j];
        if(res.size() == n){
            if(check(res)){
                ans.push_back(res);
            }
        }
        else{
            Try(i + 1);
        }
        res.pop_back();
    }
}

int main(){
    cin >> n;
    if(n % 2 == 1){
        cout << "NOT FOUND\n";
    }
    else{
        Try(0);
        for(string x : ans) cout << x << ' ';
    }
}

// Bạn hãy sinh ra các biểu thức dấu ngoặc hợp lệ từ các cặp dấu ngoặc "()", "[]", "{}" có độ dài N. Kết quả được in ra theo thứ tự từ điển tăng dần, nếu không tồn tại biểu thức hợp lệ thỏa mãn thì in ra NOT FOUND

// Input Format

// Dòng duy nhất chứa số nguyên N
// Constraints

// 2<=N<=15
// Output Format

// In ra đáp án của bài toán
// Sample Input 0

// 2
// Sample Output 0

// () [] {} 
// Sample Input 1

// 4
// Sample Output 1

// (()) ()() ()[] (){} ([]) ({}) [()] [[]] []() [][] []{} [{}] {()} {[]} {{}} {}() {}[] {}{} 