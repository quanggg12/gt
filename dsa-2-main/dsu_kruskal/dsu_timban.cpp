#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k, res = 1, x, y, u, v;
    cin >> n >> m;
    int D[n + 5] = {}, F[n + 5];
    fill(F, F + n + 1, 1);
    k = n;
    while(m--){
        cin >> x >> y;
        u = x; 
        while(D[u]) u = D[u];
        v = y;
        while(D[v]) v = D[v];
        if(u != v){
            D[u] = v;
            F[v] += F[u];
            k--;
            res = max(res, F[v]);
            while(x != u) {
                int t = D[x];
                D[x] = v; 
                x = t;
            }
            while(y != v){
                int t = D[y];
                D[y] = v;
                y = t;
            }
        }
    }
    cout << k << endl << res;
    return 0;
}

// 12 11
// 1 2
// 6 7
// 1 6
// 2 6
// 3 8
// 4 12
// 9 11
// 12 10
// 12 11
// 4 9
// 10 11