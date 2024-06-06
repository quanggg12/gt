#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int C[n + 5] = {0, 1, 2, 4};
    for(int i = 4; i <= n; i++){
        C[i] = C[i - 1] + C[i - 2] + C[i - 3];
    }
    cout << C[n]; 
    return 0;
}