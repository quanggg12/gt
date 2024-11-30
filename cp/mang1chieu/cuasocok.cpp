#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    int f[n];
    for(int &x : a) cin >> x;
    int cur_sum = 0;
    for(int i = 0; i < k; i++){
        cur_sum += a[i];
    }
    cout << cur_sum << " ";
    for(int i = k; i < n; i++){
        cur_sum = cur_sum - a[i-k] + a[i];
        cout << cur_sum << " ";
    }
    return 0;
}