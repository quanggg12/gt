#include "bits/stdc++.h"
using namespace std;
using ll = long long;

const int MAX = 1e3 + 5;
const int INF = 1e9;



/*
    dem so tplt cua do thi 
    voi moi dinh, thu xoa di xem co lam tang tplt ko
    n ~ 1e5 thi dung Tarjan;
*/

int n, m;
bool vis[MAX];
vector <int> adj[MAX];

int tplt;

void dfs(int u) {
    vis[u] = 1;
    for (int v : adj[u])
        if (!vis[v])
            dfs(v);
}

void run_case() {
    
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            ++tplt;
        }
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        memset(vis, 0, sizeof vis);
        vis[i] = 1;
        int tmp = 0;
        for (int j = 1; j <= n; j++) {
            if (!vis[j]) {
                dfs(j);
                ++tmp;
            }
        }
        if (tmp > tplt) ans++;
    }
    cout << ans << "\n";
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}

