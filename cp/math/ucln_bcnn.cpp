#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

ll gcd1(ll a, ll b) {
    if (b == 0) return a;
    else return gcd1(b, a % b);
}

ll gcd2(ll a, ll b) {
    while (b) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd1(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll a, b;
    cin >> a >> b;
    cout << gcd1(a, b) << " " << lcm(a, b);
    return 0;
}