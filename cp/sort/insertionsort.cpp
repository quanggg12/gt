#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sort(int n, int a[]){
	for(int i = 1; i < n; i++){
		int curr = i;
		while(curr > 0 and a[curr - 1] > a[curr]){
			swap(a[curr - 1], a[curr]);
			curr--;
		}
	}
}


int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(n, a);
	for(int x : a) cout << x << " ";
    return 0;
}

