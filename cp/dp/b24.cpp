 
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 10005
const int INF = 1e9 + 9;
const int MOD = 1e9 + 7;

//b24
int f[MAX];
// so luong so nho nhat de tao ra so I
signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    //O(n * sqrt(n))
    //memset()
    // 0, -1;
    int n;
    cin >> n;
    fill(f, f + n + 5, INF);
    f[0] = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = i;
        for (int j = sqrt(i); j >= 1; j--) {
            f[i] = min(f[i], f[i - j * j] + 1);
        }
    }
    cout << f[n] << "\n";

    return 0;
}