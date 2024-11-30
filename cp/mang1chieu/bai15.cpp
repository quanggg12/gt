#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và lớn thứ 2 trong mảng. Chú ý 2 giá trị này có thể giống nhau
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int max1 = -1e9, max2 = -1e9;
    for(int i = 0; i < n; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2){
            max2 = a[i];
        }
    }
    cout << max1 << " " << max2 << endl;
    return 0;
}