#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll C[1005][1005];


void init() {
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) C[i][j] = 1;
            else C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % 1000000007;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    init();
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}