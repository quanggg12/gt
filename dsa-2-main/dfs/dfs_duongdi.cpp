#include <bits/stdc++.h>
#define ll long long

using namespace std;

void path(int s, int f, int *d){
    if(s == f) cout << s;
    else {
        path(s, d[f], d);
        cout << "->" << f;
    }
}

void dfs(int s, int f){
    stack<int> S;
    int d[s+5] = {};
    S.push(s);
    d[s] = 1;
    while(S.size()){
        int u = S.top(); S.pop();
        for(int a = 1; a * a <= u; a++){
            if(u % a == 0){
                int v = (a - 1) * (u/a + 1);
                if(d[v] == 0 && v >= f) {d[v] = u; S.push(v);}
                if(d[f] > 0){
                    cout << "duong di: ";
                    path(s, f, d);
                    return;
                }
            }
        }
    }
    cout << "ko co duong di";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, f; cin >> s >> f;
    dfs(s, f);
    return 0;
}