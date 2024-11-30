#include "bits/stdc++.h"
using namespace std;
using ll = long long;

const int MAX = 1e2 + 5;
const int INF = 1e9;

int d[MAX][MAX];
int n, m, q;

/*
    - Dijkstra : trong so duong, so dinh ~ 1e5, tim tu 1 dinh O(nlogn);
    - Bellman ford: xu li trong so am, O(n ^ 2);
    - Floyd: Xu li truong hop 2 dinh bat ki, trong so am va duong;
*/


// b45 
void run_case() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j)
                d[i][j] = 0;
            else
                d[i][j] = INF;
        }
    }


    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = d[v][u] = w;
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) 
                if (d[i][k] < INF && d[k][j] < INF)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
    }

    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        cout << d[u][v] << "\n";
    }


}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}

