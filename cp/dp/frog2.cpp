#include <bits/stdc++.h>
#define ll long long

using namespace std;

// https://atcoder.jp/contests/dp/tasks/dp_b

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<int> dp(n, 1e9);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                dp[i] = min(dp[i], dp[i - j] + abs(heights[i] - heights[i - j]));
            }
        }
    }

    cout << dp[n - 1] << endl;
    return 0;
}