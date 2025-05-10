#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; 
    cin >> n;
    vector<int> a(n), diff(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    diff[0] = a[0];
    for (int i = 0; i < n; i++)  {
        diff[i] = a[i] - a[i - 1];
    }    
    // a[i] = diff[i] + diff[i - 1] + ... + diff[0]
    int q; cin >> q;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        diff[l] += k; // mang a tu l den n - 1 tang k don vi
        diff[r + 1] -= k; // => cac phan tu tu r + 1 den n - 1 giam k don vi
    }
    for (int i = 0; i < n; i++) {
        if (i == 0) a[i] = diff[i];
        else a[i] = a[i - 1] + diff[i];
        cout << a[i] << " ";
    }


    return 0;
}