#include <bits/stdc++.h>
#define ll long long

using namespace std;

int tcs(int n){
    int s = 0;
    while(n){
        s += n % 10;
        n /= 10;
    }
    return s;
}

bool cmp(int a, int b){
    if(tcs(a) != tcs(b)) return tcs(a) < tcs(b);
    return a < b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n, cmp);
    for(int x : a) cout << x << " ";
    return 0;
}