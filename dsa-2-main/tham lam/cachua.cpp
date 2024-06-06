#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k, s=0;
    cin >> n >> k;
    ll a[n];
    for(ll &x : a) cin >> x;
    sort(a, a+n, greater<int>());
    for(int i = 0; i < n && a[i] > i * k; i++){
        s += a[i] - i * k;
    }
    cout << s;
    return 0;
}