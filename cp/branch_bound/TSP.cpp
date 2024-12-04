#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int INF = 1e9;

int c[100][100];  // ma tran chi phi
int n, X[100];    // hoan vi cac tp
int visited[100]; 
int res = INF;    
int sum = 0;      
int cmin = INF;   // Chi phi nho nhat giua hai tp bat ky

void nhap() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
            if (i != j) cmin = min(cmin, c[i][j]); 
        }
    }
    X[1] = 1;       
    visited[1] = 1; 
}

void Try(int i) {
    for (int j = 2; j <= n; j++) { \
        if (!visited[j]) {
            visited[j] = 1;
            X[i] = j;
            sum += c[X[i - 1]][X[i]];

            // Nhanh can: Cat bo nhanh neu tong hien tai + can duoi >= ket qua tot nhat
            if (i == n) { // tham du n tp
                res = min(res, sum + c[X[i]][1]); 
            } else if (sum + (n - i + 1) * cmin < res) { 
                Try(i + 1); 
            }

            // Quay lui
            sum -= c[X[i - 1]][X[i]];
            visited[j] = 0;
        }
    }
}

int main() {
    nhap();
    Try(2); // Bat dau tu tp thu 2
    cout << res << endl;
    return 0;
}
