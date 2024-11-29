// https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void solve(ll n) {
    if (n == 1) {
        return;
    }
    if (n % 2 == 0) {
        cout << n / 2 << " ";
        solve(n / 2);
    } else {
        cout << n * 3 + 1 << " ";
        solve(n * 3 + 1);
    }
}
 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin >> n;
    cout << n << " ";
    solve(n);
    return 0;
