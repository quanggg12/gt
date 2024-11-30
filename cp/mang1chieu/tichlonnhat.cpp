#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int fmax = -INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (((a[i] * a[j]) < 0) and fmax == 0) fmax = a[i] * a[j];
            else fmax = max(fmax, a[i] * a[j]);
        }
    }
    cout << fmax;
    return 0;
}