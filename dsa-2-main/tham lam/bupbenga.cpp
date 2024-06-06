#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    queue<int> Q;
    int s = 0;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n, greater<int>());
    for(auto x : a){
        Q.push(x);
        if(x + k <= Q.front()) Q.pop();
        else s += x;
    }
    cout << Q.size() << " " << s;
    return 0;
}
