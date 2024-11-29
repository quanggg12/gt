#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
//  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
int solve(int n, int w, int a[], int b[]) {
    if (n == 0 || w == 0) {
        return 0;
    }
    if (a[n - 1] > w) {
        return solve(n - 1, w, a, b);
    }
    else { 
        return max(solve(n - 1, w, a, b), b[n - 1] + solve(n - 1, w - a[n - 1], a, b));
    }
}
 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, w;
    cin >> n >> w;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    int res = solve(n, w, a, b);
    cout << res;
    return 0;
}