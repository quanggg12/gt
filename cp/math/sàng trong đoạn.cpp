#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sang(ll l, ll r) {
    vector<bool> p(r - l + 1, true);
    
    for (ll i = 2; i * i <= r; i++) {
        // Tìm bội đầu tiên của i trong đoạn [l, r]
        ll start = max(i * i, (l + i - 1) / i * i);
        for (ll j = start; j <= r; j += i) {
            p[j - l] = false;
        }
    }

    for (ll i = max(l, 2LL); i <= r; i++) {
        if (p[i - l]) {
            cout << i << ' ';
        }
    }
}

int main(){
    
    return 0;
}