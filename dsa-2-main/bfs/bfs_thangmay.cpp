#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n, s, f, m, k;
    cin >> n >> m >> k >> s >> f;
    queue<int> Q;
    int d[s + 5] = {};
    Q.push(s);
    d[s] = 1;
    while(Q.size() && d[f] == 0){
        int u = Q.front(); Q.pop();
        if(u + m <= n && d[u + m] == 0) {
            d[u + m] = d[u] + 1;
            Q.push(u + m);
        }
        if(u - k >= 1 && d[u - k] == 0){
            d[u - k] = d[u] + 1;
            Q.push(u - k);
        }
    }    
    cout << d[f] - 1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--) solve();
    return 0;
}


