#include <bits/stdc++.h>
#define ll long long

using namespace std;


const int MOD = 1e9 + 7;
// https://cses.fi/problemset/task/1633/
int main() {
    int n;
    cin >> n;
    
    vector<ll> dp(n + 1, 0);
    dp[0] = 1; // Base case: There's one way to get sum 0, by choosing nothing.
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 6; ++j) {
            if (i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    
    cout << dp[n] << endl;
    return 0;
}