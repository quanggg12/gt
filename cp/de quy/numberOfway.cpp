// https://cses.fi/problemset/task/1623/
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int solve(int s, int e) {
    if (s == e) {
        return 1;
    }
    if (s > e) {
        return 0;
    }
    return solve(s + 1, e) + solve(s + 2, e) + solve(s + 3, e);
}
 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int s, e;
    cin >> s >> e;
    int res = solve(s, e);
    cout << res;
    return 0;
}