#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check(ll n){
    if(n == 0 || n == 1) return 1;
    ll f0 = 0, f1 = 1;
    for(int i = 3; i <= 93; i++){
        ll fn = f0 + f1;
        if(n == fn) return 1;
        f0 = f1;
        f1 = fn;
    }
    return 0;
}

int main(){
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ok = 0;
    for(int i = 0; i < n; i++){
        if(check(a[i])){
            cout << a[i] << " ";
            ok = 1;
        }
    }
    if(ok == 0) cout << "NONE";
    return 0;
}
