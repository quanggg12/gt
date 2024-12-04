#include <bits/stdc++.h>
#define ll long long

using namespace std;

int partition(int a[], int l, int r){
	int p = a[l];
	int i = l - 1, j = r + 1;
	while(1){
		do {
			i++;
		} while(a[i] < p);
		do{
			j--;
		} while(a[j] > p);
		if(i >= j) return j;
		swap(a[i], a[j]);
	}
}

void quicksort(int a[], int l, int r){
	if(l < r){
		int p = partition(a, l, r);
		quicksort(a, l, p);
		quicksort(a, p + 1, r);
	}
}


int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	quicksort(a, 0, n - 1);
	for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}

