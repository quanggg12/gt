#include <bits/stdc++.h>
#define ll long long

using namespace std;
// xac dinh xem co tap con cua mang a ma co tong bang k hay khong
int solve(vector<ll>& a, ll target, int i, ll sum) {
    if (sum == target) return 1;
    if (i >= a.size() or sum > target) return 0;
    return solve(a, target, i + 1, sum + a[i]) || solve(a, target, i + 1, sum);
} 

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (solve(a, k, 0, 0)) cout << "YES";
    else cout << "NO";
    return 0;
}