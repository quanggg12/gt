#include <bits/stdc++.h>
#define ll long long

using namespace std;
typedef pair<int, int> p;

class mecung{
    private:
        int n, m, a[100][100], sx, sy, fx, fy;
    public:
        void nhap(){
            cin >> n >> m;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                    cin >> a[i][j];
                }
            }
            cin >> sx >> sy >> fx >> fy;
        }

        void rao(){
            for(int i = 0; i <= n + 1; i++) a[i][0] = a[i][m+1] = 1;
            for(int j = 0; j <= m + 1; j++) a[0][j] = a[n+1][j] = 1;
        }

        int dfs(){
            stack<p> S;
            S.push({sx, sy});
            a[sx][sy] = 1;
            while(S.size()){
                p u = S.top();
                int x = u.first, y = u.second;
                S.pop();
                p Next[] = {{x-1, y}, {x+1, y}, {x, y - 1}, {x, y+1}, {x + 1, y + 1}};
                for(p v : Next){
                    if(a[v.first][v.second] == 0){
                        S.push(v);
                        a[v.first][v.second] = 1;
                    }
                    if(a[fx][fy] != 0) return 1;
                }
            }
            return 0;
        }

        int bfs(int xx, int yy){
            queue<p> S;
            S.push({xx, yy}); a[xx][yy] = 1;
            int dem = 1;
            while(S.size()){
                p u = S.front();
                S.pop();
                int x = u.first, y = u.second;
                p Next[] = {{x - 1, y}, {x + 1, y}, {x, y - 1}, {x, y + 1}, {x + 1, y + 1}};
                for(p v : Next){
                    if(a[v.first][v.second] == 0){
                        S.push(v);
                        a[v.first][v.second] = 1;
                        dem++;
                    }
                }
            }
            return dem;
        }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}