#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll res = 0;
int n = 4;
ll a[4][4];

void solve(int i, int j, ll currentSum) {
    if (i == n - 1 && j == n - 1) {
        res = max(res, currentSum + a[i][j]);
        return;
    }

    if (i + 1 < n) {
        solve(i + 1, j, currentSum + a[i][j]);
    }

    if (j + 1 < n) {
        solve(i, j + 1, currentSum + a[i][j]);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    solve(0, 0, 0);
    cout << res << endl;
    return 0;
}


// int main() {
//     ios::sync_with_stdio(0); cin.tie(0);
//     int n = 4;
//     ll a[n][n];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> a[i][j];
//         }
//     }

//     ll dp[n][n];
//     dp[0][0] = a[0][0];
//     for (int j = 1; j < n; j++) {
//         dp[0][j] = dp[0][j - 1] + a[0][j];
//     }

//     for (int i = 1; i < n; i++) {
//         dp[i][0] = dp[i - 1][0] + a[i][0];
//     }

//     for (int i = 1; i < n; i++) {
//         for (int j = 1; j < n; j++) {
//             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
//         }
//     }

//     cout << dp[n - 1][n - 1] << endl;

//     return 0;
// }
