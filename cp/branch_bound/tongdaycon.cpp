#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, a[100], S, X[100];

vector<int> v;

void nhap(){
    cin >> n >> S;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
}

void Try(int pos, int sum){
    for(int j = pos; j < n; j++){
        // X[i] = a[j]
        v.push_back(a[j]);
        sum += a[j];
        if(sum == S){
            cout << "[";
            for(int k = 0; k < v.size(); k++){
                cout << v[k];
                if(k != v.size() - 1) cout << " ";
                else cout << "]\n";
            }
        }
        else if(sum < S){
            Try(j + 1, sum);
        }
        sum -= a[j];
        v.pop_back();
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    nhap();
    Try(0, 0);
}

// Cho dãy số A[] = (a1, a2, .., an) và số tự nhiên K. Hãy đưa ra tất cả các dãy con của dãy số A[] sao cho tổng các phần tử của dãy con đó đúng bằng K. Các phần tử của dãy số A[] được giả thuyết là nguyên dương và không có các phần tử giống nhau. Ví dụ với dãy con A[] = {5, 10, 15, 20, 25}, K = 50 ta có 3 dãy con {5, 10, 15, 20}, {5, 20, 25}, {10, 15, 25}.

// Input Format

// Dòng thứ 1 đưa vào số N là số lượng phần tử của dãy số A[] và số K; Dòng tiếp theo đưa vào N phần tử của dãy số A[].

// Constraints

// 1<=N<=15; 1<=A[i],K<=100;

// Output Format

// Đưa ra tất cả các dãy con của dãy số A[] thỏa mãn yêu cầu bài toán theo thứ tự từ điển, trong đó mỗi dãy con được bao bởi các ký tự [, ]. Nếu không có dãy con nào thỏa mãn yêu cầu bài toán, hãy đưa ra -1.

// Sample Input 0

// 10 26
// 12 11 9 10 6 8 14 7 5 13 
// Sample Output 0

// [5 6 7 8]
// [5 7 14]
// [5 8 13]
// [5 9 12]
// [5 10 11]
// [6 7 13]
// [6 8 12]
// [6 9 11]
// [7 8 11]
// [7 9 10]
// [12 14]