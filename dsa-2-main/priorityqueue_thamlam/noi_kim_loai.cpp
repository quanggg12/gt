#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, res = 0; 
    int a[n];
    priority_queue<int, vector<int>, greater<int>> Q;
    cin >> n;
    while(n--){
        cin >> x;
        Q.push(x);
    }
    while(Q.size() > 1){
        x = Q.top(); Q.pop();
        x += Q.top();Q.pop();
        Q.push(x);
        res += x;
    }
    cout << res;
    return 0;
}