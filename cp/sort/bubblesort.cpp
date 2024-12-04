#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sort(int n, int a[]){
	int flag = 1;
	while(flag){
		flag = 0;
		for(int i = 0; i < n - 1; i++){
			if(a[i] > a[i + 1]){
				swap(a[i], a[i + 1]);
				flag = 1;
			}
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

