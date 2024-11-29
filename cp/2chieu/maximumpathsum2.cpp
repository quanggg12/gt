#include <bits/stdc++.h>
#define ll long long

using namespace std;
// tim 1 duong di tu dong 1 toi dong n sao cho cac phan tu tren duong di do la lon nhat co the
// moi buoc chi co the di xuong o duoi ben trai, o duoi ben phai hoac o duoi cua o hien tai

int n, m, a[1005][1005];
ll f[1005][1005];

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            f[i][j] = max(f[i - 1][j], max(f[i - 1][j - 1], f[i - 1][j + 1])) + a[i][j];
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, f[n][i]);
    }
    cout << ans << "\n";
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();    
    return 0;
}