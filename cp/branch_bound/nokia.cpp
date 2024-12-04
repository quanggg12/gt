#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string a[100] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

string s, res;
int n;

void Try(int i){
    int idx = s[i] - '0';
    for(int j = 0; j < a[idx].size(); j++){
        res += a[idx][j];
        if(res.size() == n){
            cout << res << ' ';
        }
        else{
            Try(i + 1);
        }
        res.pop_back();
    }
}

int main(){
    cin >> s;
    sort(s.begin(), s.end());
    n = s.size();
    Try(0);

}

// Cho xâu kí tự S chỉ bao gồm các số từ 2 tới 9, mỗi chữ số này trên bàn phím của điện thoại cục gạch tương ứng với 3 chữ cái như trong hình bên dưới. Bạn hãy in ra các xâu kí tự có thể tạo thành bằng cách ấn mỗi chữ số trong xâu S đúng 1 lần. Bạn hãy in ra các xâu kết quả theo thứ tự từ điển tăng dần.

// image

// Input Format

// Dòng duy nhất chứa xâu S
// Constraints

// 2<=len(S)<=9

// Các kí tự trong S là khác nhau

// Output Format

// In ra các xâu thỏa mãn
// Sample Input 0

// 23
// Sample Output 0

// ad ae af bd be bf cd ce cf 
// Sample Input 1

// 2
// Sample Output 1

// a b c 