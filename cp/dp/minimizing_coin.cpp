#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
// https://cses.fi/problemset/task/1634/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n, x;
    cin >> n >> x;
 
    ll coins[n];
 
    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }
 
    ll dp[x + 1];
    memset(dp, 0, sizeof(dp));
 
    for (ll i = 1; i <= x; i++){
        dp[i] = INT_MAX;
        for (ll j = 0; j < n; j++){
            if (i - coins[j] >= 0)
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }
 
    cout << (dp[x] >= INT_MAX ? -1 : dp[x]) << endl;
}