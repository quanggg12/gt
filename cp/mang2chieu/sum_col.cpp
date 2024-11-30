#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	int a[n + 1][m + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int s;
	for(int j = 1; j <= m; j++){
		for(int i = 1; i <= n; i++){
			s += a[i][j];	
		}
		cout << s << " ";
		s = 0;
	}
    return 0;
}