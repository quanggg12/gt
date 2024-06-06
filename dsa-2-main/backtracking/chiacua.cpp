#include <bits/stdc++.h>
#define ll long long

using namespace std;
string pa;

// void Try(int k, int n, int *a, int A, int B, int &res, string x){ //xet x0,..., x[k-1]
//     if(res < 2) return;
//     if(k == n){
//          if(res > abs(A-B)){
//             res = abs(A-B);
//             pa = x;
//          }
//          return;
//     }
//     Try(k + 1, n, a, A + a[k], B, res, x + "1");
//     Try(k + 1, n, a, A, B + a[k], res, x + "0");
// }

void Try(int k, int n, int *a, int A, int B, int &res){ //xet x0,..., x[k-1]
    if(res < 2) return;
    if(k == n){
         res = min(res, abs(A-B));
         return;
    }
    Try(k + 1, n, a, A + a[k], B, res);
    Try(k + 1, n, a, A, B + a[k], res);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a[1000], res = INT_MAX;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    Try(0, n, a, 0, 0, res);
    cout << res; 
    return 0;
}