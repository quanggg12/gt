#include <bits/stdc++.h>
#define ll long long

using namespace std;
// tong day con lien tuc lon nhat

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, res = -INT_MAX; cin >> n;
    int a[n], c[n], l = 1, r = 1, k = 1;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    res = c[1] = a[1];
    for(int i = 2; i <= n; i++){
        c[i] = max(c[i -1], 0) + a[i];
        if(res < c[i]) {
            res = c[i];
            l = k;
            r = i;
        }
        if(c[i] < 0) k = i + 1;
    }
    cout << res << "tu " << l << " den " << r;
    return 0;
} 