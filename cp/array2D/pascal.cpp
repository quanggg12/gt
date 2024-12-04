#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    ll f[n][n]; 

    for (int i = 0; i < n; i++) {
        f[i][0] = f[i][i] = 1; 
        for (int j = 1; j < i; j++) {
            f[i][j] = f[i - 1][j - 1] + f[i - 1][j]; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
