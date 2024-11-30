#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int a[1005][1005];
int n, m;
void loang(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int in = i + dx[k];
        int jn = j + dy[k];
        if(in >= 0 && in < n && jn >= 0 && jn < m && a[in][jn]){
            loang(in, jn);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j]){
                dem++;
                a[i][j] = 0;
            }
        }
    }
    cout << dem;
    return 0;
}