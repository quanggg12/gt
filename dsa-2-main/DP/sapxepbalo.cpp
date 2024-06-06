#include <bits/stdc++.h>
#define ll long long

using namespace std;
int a[100], b[100], C[100][1005] = {}, n, M;


void Trace(int n, int M){
    if(C[n][M] > 0){
        while(C[n][M] == C[n -1][M]) n--;
        Trace(n - 1, M - a[n]);
        cout << "Chon do vat kich thuoc " << a[n] << " gt " << b[n] << endl;
    }
}


int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> M;
    for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= M; j++){
            C[i][j] = a[i] > j? C[i - 1][j] : max(C[i - 1][j], b[i] + C[i - 1][j - a[i]]);
        }
    }
    cout << endl << "tong gt lon nhat " << C[n][M] << endl;
    Trace(n, M);
    return 0;
}