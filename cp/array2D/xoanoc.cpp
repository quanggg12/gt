#include <bits/stdc++.h>
using namespace std;

const int MAX = 200'007;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int f[100][100] = {0};
    int num = 1;
    int t = 0, b = n - 1, l = 0, r = m - 1;

    while (num <= n * m) {
        for (int i = l; i <= r; i++) {
            f[t][i] = num++;
        }
        t++;
        for (int i = t; i <= b; i++) {
            f[i][r] = num++;
        }
        r--;
        if (t <= b) {
            for (int i = r; i >= l; i--) {
                f[b][i] = num++;
            }
            b--;
        }
        if (l <= r) {
            for (int i = b; i >= t; i--) {
                f[i][l] = num++;
            }
            l++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
