#include <bits/stdc++.h>
#define ll long long

using namespace std;
map<int, bool> C, A, B; // C- cot, A- duong cheo chinh, B- duong cheo phu
int dem = 0;

void Try(int *x, int k, int n){ // gs da co x1,... xk
	if(k == n){
		cout << "\n" << dem++ << " : ";
		for(int i = 1; i <= k; i++) cout << "(" << i << ", " << x[i] << ") ";
		return;
	}
	for(int t = 1; t <= n; t++){
		if(C[t] == 0 && A[k + 1 - t] == 0 && B[k + 1 + t] == 0){
			x[k + 1] = t;
			C[t] = A[k + 1 - t] = B[k + 1 + t] = 1;
			Try(x, k + 1, n);
			C[t] = A[k + 1 - t] = B[k + 1 + t] = 0;
		}
	}
}


int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n = 4, x[1000];
	Try(x, 0, n);
    return 0;
}
