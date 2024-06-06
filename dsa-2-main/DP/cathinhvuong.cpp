#include <bits/stdc++.h>
#define ll long long

using namespace std;

int c[100][100], p[100][100];

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        c[i][1] = i;
        p[i][1] = 1;
   }
   for(int j = 1; j <= m; j++){
        c[1][j] = j;
        p[1][j] = -1;
   }

   for(int i = 2; i <= n; i++){
    for(int j = 2; j <= m; j++){
        c[i][j] = i * j;
        for(int k = 1; k <= i/2; k++){
            if(c[i][j] > c[k][j] + c[i - k][j]){
                c[i][j] = c[k][j] + c[i - k][j];
                p[i][j] = k;
            }
        }
        for(int k = 1; k <= j/2; k++){
            if(c[i][j] > c[i][k] + c[i][j - k]){
                c[i][j] = c[i][k] + c[i][j - k];
                p[i][j] = -k;
            }
        }
    }
   }
   cout << "so hv it nhat: " << c[n][m];
   return 0;
}