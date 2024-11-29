#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

void solve(int a[], int x, int y) {
    swap(a[x], a[y]);
}

void solve(int a[], int x, int y);

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (q--) {
        int x, y;
        cin >> x >> y;
        solve(a, x, y);
    }
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}       