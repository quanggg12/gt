#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    x--; y--;  
 
    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int j = i - (x - y);
        if (j >= 0 && j < m) {
            sum += A[i][j];
        }
    }
 
    for (int i = 0; i < n; i++) {
        int j = (x + y) - i;
        if (j >= 0 && j < m && (i != x || j != y)) { 
            sum += A[i][j];
        }
    }
 
    cout << sum << endl;
    return 0;
}
