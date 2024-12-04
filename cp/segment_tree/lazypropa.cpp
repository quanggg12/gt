#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000

int T[4 * MAXN], lazy[4 * MAXN];

// Lazy push function from parent node to child nodes
void push(int node, int l, int r) {
    if (lazy[node] != 0) {
        T[node] += (r - l + 1) * lazy[node];
        if (l != r) {
            lazy[2 * node + 1] += lazy[node];
            lazy[2 * node + 2] += lazy[node];
        }
        lazy[node] = 0;
    }
}

// The function updates the segment [L, R] with the additional value val
void update(int node, int l, int r, int L, int R, int val) {
    push(node, l, r);
    if (R < l || r < L) return;
    if (L <= l && r <= R) {
        lazy[node] += val;
        push(node, l, r);
        return;
    }
    int mid = (l + r) / 2;
    update(2 * node + 1, l, mid, L, R, val);
    update(2 * node + 2, mid + 1, r, L, R, val);
    T[node] = T[2 * node + 1] + T[2 * node + 2];
}


int query(int node, int l, int r, int L, int R) {
    push(node, l, r);
    if (R < l || r < L) return 0;
    if (L <= l && r <= R) return T[node];
    int mid = (l + r) / 2;
    return query(2 * node + 1, l, mid, L, R) + query(2 * node + 2, mid + 1, r, L, R);
}

int main() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int type;
        cin >> type;
        if (type == 1) {
            int L, R, val;
            cin >> L >> R >> val;
            update(0, 1, n, L, R, val);
        } else if (type == 2) {
            int L, R;
            cin >> L >> R;
            cout << query(0, 1, n, L, R) << endl;
        }
    }
}
