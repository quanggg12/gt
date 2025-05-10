#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
int parent[1005];

void init() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
}

// tim dai dien
int find(int u) {
    while (u != parent[u]) {
        u = parent[u];
    }
    return u;
}

// gop 2 dinh u va v
bool unite(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return false;
    if (u < v) parent[v] = u;
    else parent[u] = v;
    return true;
}

// toi uu nen duong - path compression optimization
int find2(int u) {
    if (u == parent[u]) {
        return u;
    }
    else {
        return parent[u] = find2(parent[u]);
    }
}

// toi uu gop theo kich thuoc
int n;
int parent[1005], sz[1005];

void init2() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

bool unite2(int u, int v) {
    u = find2(u);
    v = find2(v);
    if (u == v) return false;
    if (sz[u] < sz[v]) {
        swap(u, v);
    }
    sz[u] += sz[v];
    parent[v] = u;
    return true;
}


