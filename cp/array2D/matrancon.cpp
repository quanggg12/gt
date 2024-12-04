#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    int A[100][100], B[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> B[i][j];
        }
    }

    bool found = false;
    for (int i = 0; i <= n - x; i++) {
        for (int j = 0; j <= m - y; j++) {
            bool match = true;
            for (int k = 0; k < x; k++) {
                for (int l = 0; l < y; l++) {
                    if (A[i + k][j + l] != B[k][l]) {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
