#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dfs(int s, int f){
    stack<int> S;
    int d[s+1] = {};
    S.push(s);
    d[s] = 1;
    while(S.size()){
        int u = S.top(); S.pop();
        for(int a = 1; a * a <= u; a++){
            if(u % a == 0){
                int v = (a - 1) * (u/a + 1);
                if(d[v] == 0 && v >= f){
                    d[v] = 1; S.push(v);
                }
                if(v == f) return 1;
            }
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, f; cin >> s >> f;
    if(dfs(s, f)) cout << "co dg di";
    else cout << "ko co dg di";
    return 0;
}