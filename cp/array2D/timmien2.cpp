#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m, a[100][100];

void nhap() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

void loang(int i, int j) {
    a[i][j] = 0;
    for (int k = 0; k < 8; k++) {
        int x = i + dx[k], y = j + dy[k];
        if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == 1) {
            loang(x, y);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    nhap();
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                res++;
                loang(i, j);
            }
        }
    }
    return 0;
}