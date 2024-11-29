#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(vector<int>& a, int n) {
    int i, x;
    cin >> i >> x;
    a.insert(a.begin() + i, x);
    for(int i = 0; i< n; i++) cout << a[i] << " ";
    cout << endl;
}


int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	while(q--){
		solve(a, n);
	}
    return 0;
}