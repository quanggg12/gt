#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct money{
    int n, a[100], M, res = INT_MAX;
    void solve(){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        cin >> M;
        Try(0, 0, 0);
        if(res == INT_MAX) cout << "ko doi duoc";
        else cout << res;

    }

    void Try(int k, int T, int t){ // gia su doi duoc k loai, tong tien T, tong to t
        if(k == n - 1){
            if((M-T)%a[n] == 0){
                int xn = (M-T)/a[n];
                res = min(res, t+xn);
            }
            return;
        }
        for(int x = 0; x <= (M-T)/a[k + 1] && x + t < res; x++){
            Try(k + 1, T + x * a[k + 1], t + x);
        }
    }
};

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    money M;
    M.solve();   
    return 0;
}