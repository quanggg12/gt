// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int check(int l, int r, ll a[]) {
    if (a[l] != a[r]) {
        return 0;
    }
    if (l >= r) {
        return 1;
    }
    if (a[l] == a[r]) {
        return check(l + 1, r - 1, a);
    }
}
 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; 
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (check(0, n - 1, a)) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}