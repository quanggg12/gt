#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;
// Cho mang A do dai n. Dem so cap (i, j) sao cho Ai = Aj va i khac j
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    map<int, int> cnt;
    ll res = 0;
    for (int i = 0; i < n; i++) {
        res += cnt[a[i]];
        cnt[a[i]]++;
        cout << res << " " << cnt[a[i]] << endl;
    }
    // cout << res;
    return 0;
}