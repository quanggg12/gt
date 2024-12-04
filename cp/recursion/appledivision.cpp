#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
//  https://cses.fi/problemset/task/1623/
ll solve(ll x, ll y, int index, int n, ll a[]) {
    if (index == n) {
        return abs(x - y);
    }
    return min(solve(x + a[index], y, index + 1, n, a), solve(x, y + a[index], index + 1, n, a));
}
 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    ll res = solve(0, 0, 0, n, a);
    cout << res;
    return 0;
