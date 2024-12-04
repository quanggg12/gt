#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MOD = 1000000007;
const int MX = 100001;
// xet tat ca cac tap hop cac so nguyen duong co cac phan tu khac nhau va ko lon hon n.
// Dem xem co tat ca bao nhieu tap hop co so luong phan tu bang k va tong cac phan tu trong tap hop bang s
// Cac tap hop la hoan vi cua nhau chi duoc tinh la 1
// n = 9, k = 3, s = 23 -> {6, 8, 9}    
int n, k, s, x[100];
int cnt = 0;

void ql(int i, int sum) {
    for (int j = x[i - 1] + 1; j <= n; j++) {
        if (sum + j <= s) {
            x[i] = j;
            if (i == k) {
                if (sum + j == s) {
                    cnt++;
                }
            }
            else {
                ql(i + 1, sum + j);
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k >> s;
    ql(1, 0);
    cout << cnt;
    return 0;
}