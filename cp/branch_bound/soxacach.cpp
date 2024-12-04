#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, used[100], X[100];

bool check(){
    for(int i = 1; i <= n - 1; i++){
        if(abs(X[i] - X[i + 1]) == 1) return false;
    }
    return true;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j]){
            X[i] = j;
            used[j] = 1;
            if(i == n){
                if(check()){
                    for(int i = 1; i <= n; i++){
                        cout << X[i];
                    }
                    cout << endl;
                }
            }
            else{
                Try(i + 1);
            }
            used[j] = 0;
        }
    }
}

int main(){
    cin >> n;
    Try(1);

}

// Cho số nguyên dương N (2 < N <10). Một số nguyên dương K có N chữ số được gọi là số xa cách nếu thỏa mãn: K không chứa chữ số 0. Tất cả các chữ số từ 1 đến N đều xuất hiện trong K đúng 1 lần. Không có hai chữ số liên tiếp nào trong K có hiệu bằng 1.

// Input Format

// 1 dòng duy nhất chứa số nguyên dương N

// Constraints

// 3<=N<=9

// Output Format

// In ra các số thỏa mãn theo thứ tự tăng dần

// Sample Input 0

// 4
// Sample Output 0

// 2413
// 3142