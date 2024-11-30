#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho ma trận A các số nguyên có N hàng và M cột. Điểm được coi là cực đại trong ma trận nếu nó lớn hơn tất các số ở các số ở ô xung quanh mà chung đỉnh với nó. Hãy đếm xem trong ma trận có bao nhiêu điểm cực đại.
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int check = 1;
            for(int k = 0; k < 8; k++){
                int in = i + dx[k];
                int jn = j + dy[k];
                if(in >= 0 && in < n && jn >= 0 && jn < m && a[i][j] <= a[in][jn]){
                    check = 0;
                    break;
                }
            }
            if(check) cnt++;
        }
    }
    cout << cnt;
}