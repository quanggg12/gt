#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll sumOfDivisors(ll n) {
    ll sum = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int main() {
    ll n;
    cin >> n;
    ll result = sumOfDivisors(n);
    cout << result << endl;
    return 0;
}