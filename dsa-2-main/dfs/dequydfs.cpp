#include <bits/stdc++.h>
#define ll long long

using namespace std;
// moi con duong ve 0

int dfs(int s, int f){
    if(s == f) return 1;
    if(s < f) return 0;
    for(int a = 1; a * a <= s; a++){
        if(s % a == 0){
            int v = (a - 1) * (s/a + 1);
            if(dfs(v, f)) return 1;
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, f; cin >> s >> f;
    if(dfs(s, f)) cout << "co duong di";
    else cout << "ko co duong di";
    return 0;
}