#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int c[100][100];
int n, X[100]; // X[i] = j : thành phố thăm ở lượt thứ i là thành phố j
int visited[100], res = INT_MAX, sum = 0;

void nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> c[i][j];
    }
    X[1] = 1;
    visited[1] = 1;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!visited[j]){
            visited[j] = 1;
            X[i] = j;
            sum += c[X[i - 1]][X[i]];
            if(i == n){
                res = min(res, sum + c[X[i]][1]);
            }
            else{
                Try(i + 1);
            }
            sum -= c[X[i - 1]][X[i]];
            visited[j] = 0;
        }
    }
}

int main(){
    nhap();
    Try(2);
    cout << res << endl;
}
