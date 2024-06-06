#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n, greater<int>()); // sap xep giam dan
    for(int i = 0; i < n; i++) a[i]+=i;
    cout << *max_element(a, a+n) + 2;    
    return 0;
}