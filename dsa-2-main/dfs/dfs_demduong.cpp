#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dfs(int s, int f){
    stack<int> S;
    int d[s+5] = {};
    S.push(s);
    d[s] = 1;
    while(S.size()){
        int u = S.top(); S.pop();
        for(int a = 1; a * a <= u; a++){
            if(u % a == 0){
                int v = (a - 1) * (u/a + 1);
                if(d[v] == 0 && v >= f){ d[v] = d[u] + 1; S.push(v);}
                if(d[f] > 0) return d[v] - 1;
            }
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, f; cin >> s >> f;
    cout << dfs(s, f);
    return 0;
}