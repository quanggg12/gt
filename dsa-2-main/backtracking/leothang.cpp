#include <bits/stdc++.h>
#define ll long long

using namespace std;

void Try(int T, int n, int &res){
    if(T == n){
        res++;
        return;
    }
    for(int t = 1; t <= 3 and t + T <= n; t++) Try(T+t, n, res);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, res = 0;
    cin >> n;
    Try(0, n, res);
    cout << res;
    return 0;
}