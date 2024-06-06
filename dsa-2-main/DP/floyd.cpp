#include <bits/stdc++.h>
#define ll long long

using namespace std;

int p[105][105] = {};
void trace(int u, int v){
    if(p[u][v] == 0){
        cout << u << "->";
    }
    else {
        trace(u, p[u][v]);
        trace(p[u][v], v);
    }
}


int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int c[n + 1][n + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            c[i][j] = i == j? 0 : 1e9;
        }
    }

    for(int i = 1; i <= m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        c[u][v] = m;
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
                // if(c[i][j] > c[i][k] + c[k][j]){
                //     c[i][j] = c[i][k] + c[k][j];
                //     p[i][j] = k;
                // }
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i != j){
                if(c[i][j] == 1e9) cout << endl << i << " : " << j << " ko di duoc";
                else {
                    cout << endl << i << " : " << j << " dai " << c[i][j]; //<< " nhu sau ";
                    // trace(i, j);
                    // cout << j;
                }

            }
        }
    }
    return 0;
}
