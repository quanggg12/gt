#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, d[100000], F[10000] = {};
    vector<int> A[10000]; //A[1] chua cac ptu tiep xuc voi 1
    queue<int> Q;
    cin >> n >> m;

    while(m--){
        int x, y;
        cin >> x >> y;
        A[x].push_back(y);
        A[y].push_back(x);
    }

    fill(d, d + n + 1, -1); //d[i] = -1
    cin >> F[0];
    for(int i = 1; i <= F[0]; i++){
        int x; cin >> x;
        Q.push(x);
        d[x] = 0;
    }
    while(Q.size()){
        int u = Q.front();
        Q.pop();
        for(auto v : A[u]){
            if(d[v] == -1){
                d[v] = d[u] + 1;
                Q.push(v);
                F[d[v]]++;
            }
        }
    }
    for(int i = 0; F[i] != 0; i++){
        cout << endl << "F" << i << " : " << F[i] << endl;
        // for(int j = 1; j <= n; j++){
        //     if(d[j] == i) cout << j << " ";
        // }
    }
    return 0;
}