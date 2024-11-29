#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> adj[1005];
bool vis[1005];
int parent[1005];

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

void bfs(int u) {
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    while (q.size()) {
        int x = q.front();
        q.pop();
        for (int v : adj[x]) {
            if (!vis[v]) {
                q.push(v);
                parent[v] = u;
                vis[v] = 1;
            }
        }
    }
}

int tplt() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cnt++;
            bfs(i);
        }
    }
    return cnt;
}

void path(int s, int t) {
    bfs(s);
    if (!vis[t]) {
        cout << "ko ton tai duong di";
    }
    else {
        vector<int> res;
        while (t != s) {
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for (int x : res) cout << x << " ";
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    return 0;
}