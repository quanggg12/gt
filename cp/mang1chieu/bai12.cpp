#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí(bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng và vị trí đầu tiên của giá trị lớn nhất trong mảng. Tức là nếu có nhiều số có cùng giá trị nhỏ nhất bạn phải in ra ví trí cuối cùng, và có nhiều số có cùng giá trị lớn nhất trong mảng bạn phải in ra vị trí đầu tiên lớn nhất đó.
int main(){
    int n; cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    int max_v = -1e9, max_i, min_v = 1e9, min_i;
    for(int i = 0; i < n; i++){
        if(a[i] <= min_v){
            min_v = a[i];
            min_i = i;
        }
        if(a[i] > max_v){
            max_v = a[i];
            max_i = i;
        }
    }
    cout << min_i << " " << max_i;
    return 0;
}