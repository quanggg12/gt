// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void solve(ll a[], int index) {
    if (index < 0) {
        return;
    }
    cout << a[index] << " ";
    solve(a, index - 2);
}
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    solve(a, (n % 2 == 0) ? n - 2 : n - 1);
    return 0;
}