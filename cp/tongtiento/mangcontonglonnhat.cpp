#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll curr = a[0], fmax = a[0];
    for (int i = 1; i < n; i++) {
        curr = max(a[i], curr + a[i]);
        fmax = max(fmax, curr);
    }
    cout << fmax;
    return 0; 
}