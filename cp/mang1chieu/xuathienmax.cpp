#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

int solve(int a[], int n) {
    map<int, int> mp;
    int maxFreq = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        if (mp[a[i]] > maxFreq) {
            maxFreq = mp[a[i]];
            res = a[i];
        }
        else if (mp[a[i]] == maxFreq and a[i] > res) res = a[i];
    }
    return res;
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