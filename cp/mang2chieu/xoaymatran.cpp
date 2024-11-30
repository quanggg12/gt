#include <bits/stdc++.h>
#define ll long long

using namespace std;

void rotate(vector<vector<int>>& a){
	int n = a.size();
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			swap(a[i][j], a[j][i]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n/2; j++){
			swap(a[i][j], a[i][n - j - 1]);
		}
	}
}


int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	rotate(a);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}