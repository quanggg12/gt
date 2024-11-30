#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	string a, b; cin >> a >> b;
	int n = a.size();
	int res = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			string sub = a.substr(i, j - i + 1);
			if(sub == b) res++;
		}
	}
	cout << res;
    return 0;
}