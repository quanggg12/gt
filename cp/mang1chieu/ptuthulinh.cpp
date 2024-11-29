#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

int solve(int a[], int n) {
    int cnt = 0, fmax = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > fmax) {
            fmax = a[i];
            cnt++;
        }
    }
    return cnt;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int res = solve(a, n);
    cout << res;
    return 0;
}