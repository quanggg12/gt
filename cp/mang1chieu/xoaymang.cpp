#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    reverse(a, a + k);
    reverse(a + k, a + n);
    reverse(a, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}