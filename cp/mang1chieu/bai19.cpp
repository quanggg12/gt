#include <bits/stdc++.h>
#define ll long long

using namespace std;
//chen
int main(){
    int n, x, k; cin >> n >> x >> k;
    int a[n];
    for(int %x : a) cin >> x;
    for(int i = 1; i < n - 1; i++){
        if(k == i + 1) cout << x << " " << a[i] << " ";
        else cout << a[i] <<  " ";
    }

    return 0;
}