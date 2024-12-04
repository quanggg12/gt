#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> adj[100001];
bool vis[100001];

void init() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}


void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

void bfs(int u) {
    queue<int> q;
    q.push(u);
    vis[u] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

int count_connected_components() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cnt++;
            dfs(i); // bfs(i);
        }
    }
    return cnt;
}

// find path from u to v
int parent[100001];

void bfs(int u, int v) { 
    queue<int> q;
    q.push(u);
    vis[u] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                parent[v] = u;
                q.push(v);
                if (v == u) 
                    return;
            }
        }
    }
}

void dfs(int u, int v) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            parent[v] = u;
            dfs(v, u);
        }
    }
}

void path(int u, int v) {
    bfs(u, v); // dfs(u, v);
    if (!vis[v]) {
        cout << "No path from " << u << " to " << v << '\n';
    } else {
        vector<int> res;
        for (int i = v; i != u; i = parent[i]) {
            res.push_back(i);
        }
        res.push_back(u);
        reverse(res.begin(), res.end());
        for (int i : res) {
            cout << i << ' ';
        }
        cout << '\n';
    }
}

// check if there is a cycle in the graph undirected

// bool dfs(int u, int p) {
//     vis[u] = true;
//     for (int v : adj[u]) {
//         if (!vis[v]) {
//             if (dfs(v, u)) {
//                 return true;
//             }
//         } else if (v != p) {
//             return true;
//         }
//     }
//     return false;
// }

// bool bfs(int u) {
//     queue<int> q;
//     q.push(u);
//     vis[u] = true;
//     while (!q.empty()) {
//         int u = q.front();
//         q.pop();
//         for (int v : adj[u]) {
//             if (!vis[v]) {
//                 vis[v] = true;
//                 parent[v] = u;
//                 q.push(v);
//             } else if (v != parent[u]) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// check if there is a cycle in the graph directed
int color[100001];

// bool dfs(int u) {
//     color[u] = 1;
//     for (int v : adj[u]) {
//         if (color[v] == 0) {
//             if (dfs(v)) {
//                 return true;
//             }
//         } else if (color[v] == 1) {
//             return true;
//         }
//     }
//     color[u] = 2;
//     return false;
// }

int degree[100001];
bool bfs() { // Kahn
    queue<int> q;
    int count = 0; // To count the number of nodes processed
    // Initialize the queue with all nodes having in-degree 0
    for (int i = 1; i <= n; i++) {
        if (degree[i] == 0) {
            q.push(i);
        }
    }
    // Process nodes in topological order
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        count++;

        for (int v : adj[u]) {
            degree[v]--;
            if (degree[v] == 0) {
                q.push(v);
            }
        }
    }
    // If count of processed nodes is not equal to the number of nodes, there is a cycle
    return count != n;
}




int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    init();
    return 0;
}