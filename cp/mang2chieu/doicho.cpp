#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
 
    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
 
    for (int i = 0; i < q; i++) {
        int type, x, y;
        cin >> type >> x >> y;
        x--; 
        y--;
 
        if (type == 1) {
            swap(A[x], A[y]);
        } else {
            for (int j = 0; j < n; j++) {
                swap(A[j][x], A[j][y]);
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}
