#include <bits/stdc++.h>
#define ll long long

using namespace std;

// https://leetcode.com/problems/house-robber/description/
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> dp(n+1, 0);
    dp[1] = nums[0];
    for(int i = 2; i <= n; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + nums[i-1]);
    }
    cout << dp[n] << endl;
    return 0;
}