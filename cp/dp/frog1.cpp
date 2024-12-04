#include <bits/stdc++.h>
#define ll long long

using namespace std;
// https://atcoder.jp/contests/dp/tasks/dp_a

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<int> dp(n, 1e9);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        dp[i] = min(dp[i], dp[i - 1] + abs(heights[i] - heights[i - 1]));
        if (i > 1) {
            dp[i] = min(dp[i], dp[i - 2] + abs(heights[i] - heights[i - 2]));
        }
    }

    cout << dp[n - 1] << endl;
    return 0;
}