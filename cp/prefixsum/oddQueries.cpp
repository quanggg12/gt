#include <bits/stdc++.h>
#define ll long long

using namespace std;
// https://codeforces.com/contest/1807/problem/D
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        ll n, q;
        cin >> n >> q;

        ll a[200005] = {0};
        ll pref[200005] = {0};

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i-1] + a[i];
        }

        while (q--) {
            ll l, r, k;
            cin >> l >> r >> k;
            ll new_sum = pref[n] - (pref[r] - pref[l-1]) + k * (r - l + 1);
            cout << (new_sum % 2 ? "YES" : "NO") << endl;
        }
    }

    return 0;
}