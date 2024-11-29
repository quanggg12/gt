#include <bits/stdc++.h>
#define ll long long

using namespace std;
// tim duong di tu o (1, 1) den (n, m) sao cho tong cac o tren duong di la lon nhat. Chi duoc di xuong hoac sang phai

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m, a[100][100];
ll f[100][100];

void nhap() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    nhap();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1) {
                f[i][j] = f[i][j - 1] + a[i][j];
            } else if (j == 1) {
                f[i][j] = f[i - 1][j] + a[i][j];
            } else {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];
            }
        }
    }
    cout << f[n][m];
    return 0;
}