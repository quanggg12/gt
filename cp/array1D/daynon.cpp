#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

int solve(int a[], int n) {
    int i = 0;
    while (i < n - 1 and a[i] < a[i + 1]) i++;
    while (i < n - 1 and a[i] > a[i + 1]) i++;
    return i == n - 1;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int res = solve(a, n);
    if (res) cout << "YES";
    else cout << "NO";
    return 0;
}