#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MOD = 1000000007;
const int MX = 100001;
// Cho mang A[] gom N so nguyen duong phan biet va so X. 
// Các số trong mảng A có thể sử dụng nhiểu lần
// Tìm phép tổ hợp các số trong mảng A có tổng bằng x
// Mỗi tổ hợp các số của mảng A được in ra theo thứ tự ko giảm
// VD: A[] = {2, 4, 6, 8}, x = 8 -> {2, 2, 2, 2}, {2, 2, 4}, {2, 6}, {4, 4}, {8}
int n, S, a[100];
int X[100];
vector<int> v;
void nhap() {
    cin >> n >> S;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
}

vector<vector<int>> res;

void Try(int i, int sum, int start) {
    for (int j = start; j < n; j++) {
        // X[i] = a[j];
        v.push_back(a[j]); 
        sum += a[j];
        if (sum == S) {
            // vector<int> tmp(X + 1, X + i + 1);
            // res.push_back(tmp);
            res.push_back(v);
        }
        else if (sum < S) {
            Try(i + 1, sum, j); 
            // Try(i + 1, sum, j + 1); truong hop cac phan tu ko trung lap
            // Try(i + 1, sum, 0); tat ca cac cach xuat hien
        }
        v.pop_back();
        sum -= a[j];
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    nhap();
    Try(1, 0, 0);
    if (res.size() == 0) {
        cout << -1 << endl;
    }
    else {
        cout << res.size() << endl;
        for (vector<int> it : res) {
            cout << "{";
            for (int i = 0; i < it.size(); i++) {
                cout << it[i];
                if (i != it.size() - 1) cout << " ";
                else cout << "}\n";
            }
        }
    }
    return 0;
}