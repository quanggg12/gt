#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k, a[200005];

//Neu 1 day con co tong doi da la m, thi cac ban chia mang thanh bao nhieu day con
bool check(ll m){
	int cnt = 0; 
	ll tong = 0;
	for(int i = 0; i < n; i++){
		tong += a[i];
		if(tong > m){
			++cnt;
			tong = a[i];
		}
	}
	++cnt;
	if(cnt <= k) return true;
	else return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> k;
	ll left = -1e9, right = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		left = max(left, 1ll * a[i]);
		right += a[i];
	}
	ll ans = -1;
	while(left <= right){
		ll mid = (left + right) / 2;
		cout << mid << endl;
		if(check(mid)){
			ans = mid;
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	cout << ans << endl;
}