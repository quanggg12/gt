#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dp[105][105] = {};
string x, y;

void trace(int n, int m){
    if(dp[n][m]){
        while(dp[n][m] == dp[n - 1][m]) n--;
        while(dp[n][m] == dp[n][m - 1]) m--;
        trace(n-1, m - 1);
        cout << x[n];
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m;
    cin >> x; n = x.size(); x = "$" + x;
    cin >> y; m = y.size(); y = "$" + y;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(x[i] == y[j]) dp[i][j] = 1 + dp[i - 1][j - 1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j - 1]);
        }
    }
    cout << "do dai: " << dp[n][m] << endl;
    trace(n, m);
    return 0;
}