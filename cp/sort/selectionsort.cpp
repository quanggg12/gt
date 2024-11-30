#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sort(int n, int a[]){
	int min_idx = 0;
	for(int i = 0; i < n; i++){
		min_idx = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_idx]){
				min_idx = j;
			}
		}
		swap(a[i], a[min_idx]);
	}
}


int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(n, a);
	for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}

