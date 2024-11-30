#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
int solve(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return solve(n -1) + solve(n - 2);
}
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int res = solve(n);
    cout << res;
    return 0;
}