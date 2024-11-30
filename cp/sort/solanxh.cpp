#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho mảng số nguyên A[] có N phần tử, hãy tìm số xuất hiện nhiều nhất trong mảng.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n);

    int val = a[0];
    int max_fre = 1;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        if(a[i] == a[i-1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        if(cnt > max_fre){
            val = a[i];
            max_fre = cnt;
        }
    }
    cout << val << " " << max_fre;
    return 0;
}