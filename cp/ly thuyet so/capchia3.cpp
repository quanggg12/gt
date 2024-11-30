#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;
// cho mang A do dai n. Dem so cap (i, j) voi i < j sao cho Ai + Aj chia het cho 3
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    map<int, int> cnt;
    ll res = 0;
    for (int i = 0; i < n; i++) {
        res += cnt[(3 - a[i] % 3) % 3];
        cnt[a[i] % 3]++;
    }
    cout << res;
    return 0;
}