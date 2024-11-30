#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
ll solve(int n) {
    if (n == 0) {
        return 1;
    }
    else return n * solve(n - 1);
}
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    ll res = solve(n);
    cout << res;
    return 0;
}