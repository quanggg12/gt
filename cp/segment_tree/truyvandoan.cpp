#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000  

int T[4 * MAXN];

void build(int arr[], int node, int start, int end) {
    if (start == end) {
        T[node] = arr[start];
    } else {
        int mid = (start + end) / 2;

        build(arr, 2 * node + 1, start, mid);

        build(arr, 2 * node + 2, mid + 1, end);
      
        T[node] = max(T[2 * node + 1], T[2 * node + 2]);
    }
}

void update(int node, int start, int end, int idx, int val) {
    if (start == end) {
        T[node] = val;
    } else {
        int mid = (start + end) / 2;
        if (idx <= mid) {
            update(2 * node + 1, start, mid, idx, val);
        } else {
            update(2 * node + 2, mid + 1, end, idx, val);
        }
        T[node] = max(T[2 * node + 1], T[2 * node + 2]);
    }
}

int query(int node, int start, int end, int L, int R) {
    if (R < start || end < L) {
        // If the range [L, R] does not overlap with [start, end], return a very small value
        return -INT_MAX;
    }
    if (L <= start && end <= R) {
        // If the range [start, end] is completely within [L, R], return the value at node
        return T[node];
    }
    int mid = (start + end) / 2;
    int left_query = query(2 * node + 1, start, mid, L, R);
    int right_query = query(2 * node + 2, mid + 1, end, L, R);
    return max(left_query, right_query); 
    // return left_query + right_query;
}

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n + 1];  
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    build(arr, 0, 1, n);

    while (m--) {
        int type;
        cin >> type;
        if (type == 1) {
            int i, x;
            cin >> i >> x;
            update(0, 1, n, i, x);
        } else if (type == 2) {
            int L, R;
            cin >> L >> R;
            cout << query(0, 1, n, L, R) << endl;
        }
    }

    return 0;
}
