#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<ll> pre(n + 1, 0);
    for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + a[i - 1];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
    return 0;
}