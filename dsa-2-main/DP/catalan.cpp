#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    ll a[n + 5] = {0, 1, 1};
    for(int i = 3; i <= n; i++){
        for(int j = 1; j < i; j++){
            a[i] += a[j] * a[i - j];
        }
    }
    cout << a[n];
    return 0;
}