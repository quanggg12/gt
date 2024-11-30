#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll solve(vector<ll>& a, ll x) {
    ll n = a.size();
    ll cnt = 0, prefixSum = 0;
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        prefixSum += a[i];
        if (prefixSum == x) cnt++;
        if (mp.find(prefixSum - x) != mp.end()) {
            cnt += mp[prefixSum - x];
        }
        mp[prefixSum]++;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll res = solve(a, x);
    cout << res;
    return 0;
}