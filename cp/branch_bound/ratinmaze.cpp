#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MOD = 1000000007;
const int MX = 100001;
// Cho me cung ma tran nhi phan n hang n cot. Tim duong di tu o (1, 1) den o (n, n)
// 1: co the di duoc, 0: khong the di duoc
// Chi di xuong duoi hoac sang phai
// Neu ko di duoc den (n, n) thi in ra -1

int n, a[100][100], flag = 0;
string s = "";

void nhap() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}


void Try(int i, int j) {
    if (i == n - 1 && j == n - 1) {
        flag = 1;
        cout << s << "\n";
        return;
    }
    if (a[i + 1][j] == 1 && i + 1 < n) {
        s += "D";
        Try(i + 1, j);
        s.pop_back();
    }
    if (a[i][j + 1] == 1 && j + 1 < n) {
        s += "R";
        Try(i, j + 1);
        s.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    nhap();
    Try(0, 0);
    if (flag == 0) cout << -1; 
    return 0;
}