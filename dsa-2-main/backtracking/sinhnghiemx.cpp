#include <bits/stdc++.h>
#define ll long long

using namespace std;
int dem = 0;

void Try(int *x, int k, int T, int n, int M){
    if(k == n - 1){
        x[n] = M - T;
        for(int i = 1; i <= n; i++){
            cout << x[i] << (i<n? " + " : " = ");
            cout << M << endl;
            dem++;
        }
    }
    else{
        for(x[k + 1] = 0; x[k + 1] <= M-T; x[k + 1]++) Try(x, k + 1, T + x[k + 1], n, M);
    }
}


int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int x[100], n, M;
    cin >> n >> M;
    Try(x, 0, 0, n, M);
    cout << dem;
    return 0;
}