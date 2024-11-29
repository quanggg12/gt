#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> adj[1005];
bool vis[1005];

void nhap() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(vis, 0, sizeof(vis));
}

void dfs(int u) {
    vis[u] = 1;
    cout << u << " ";
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

int tplt() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cnt++;
            dfs(i);
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    return 0;
}