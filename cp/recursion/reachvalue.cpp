#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
//  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
bool check(ll n, ll value) {
    if (value == n) {
        return true;
    } 
    if (value > n) {
        return false;
    }
 
    return check(n, value * 10) || check(n, value * 20);
}
 
 
void solve() {
    ll n; cin >> n;
    if (check(n, 1)) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}
 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}