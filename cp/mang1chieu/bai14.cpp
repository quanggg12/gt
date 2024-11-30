#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.
int gcd(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int uoc = 0;
    for(int i = 0; i < n; i++){
        uoc = gcd(uoc, a[i]);
    }
    cout << uoc;
    return 0;
}