#include <bits/stdc++.h>
#define ll long long

using namespace std;

// https://cses.fi/problemset/task/1637

int min_steps(int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            if (digit != 0) {
                dp[i] = min(dp[i], dp[i - digit] + 1);
            }
        }
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << min_steps(n) << endl;
    return 0;
}