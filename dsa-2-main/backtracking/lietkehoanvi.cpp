#include <bits/stdc++.h>
#define ll long long

using namespace std;

int d[1000] = {};
int dem = 0;


void Try(int *x, int k, int n){
    if(k == n){
        dem++;
        for(int i = 1; i <= k; cout << x[i++] << " ");
        cout << endl;
        return;
    }
    for(int t = 1; t <= n; t++){
        if(d[t] == 0 and(k == 0 or (t + x[k]) % 4 != 0)){
            x[k + 1] = t;
            d[t] = 1;
            Try(x, k + 1, n);
            d[t] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, x[1000];
    cin >> n;
    Try(x, 0, n); 
    // int a[] = {7, 2, 8, 1, 6,3, 5, 4};
    // next_permutation(a, a+8);
    // for(int x : a) cout << x << " ";
    return 0;
}