#include <bits/stdc++.h>
#define ll long long

using namespace std;


void sang(ll l, ll r){
	bool p[r - l + 1];
	for(ll i = 0; i <= r - l; i++) p[i] = true;
	for(ll i = 2; i <= sqrt(r); i++){
		//duyet cac boi cua i >= l va <= r
		for(ll j = max(i * i, (l + i - 1) / i * i); j <= r; j += i){
			p[j - l] = false;
		}

	}
	for(ll i = max(l, 2ll); i <= r; i++){
		if(p[i - l]){
			cout << i << ' ';
		}
	}
}

int main(){
    
    return 0;
}