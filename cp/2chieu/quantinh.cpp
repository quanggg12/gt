#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, m, s, t, cnt = 0;
int a[1005][1005];

int dx[4] = {-1, -1, 1, 1};
int dy[4] = {-1, 1, -1, 1};

void loang(int i, int j) {
    a[i][j] = 1;
    ++cnt;
    for (int k = 0; k < 4; k++) {
        int x = i + dx[k], y = j + dy[k];
        if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 0) {
            loang(x, y);
        }
    }
} 

void nhap() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    loang(s, t);
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    nhap();
    return 0;
}