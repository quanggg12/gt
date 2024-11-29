#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;
// Cho so nguyen n. Dem so cach phan tich n thanh it nhat 2 so nguyen lien tiep
// vi du: 12 = 3 + 4 + 5
// input: 12
// output: 1
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll n;
    cin >> n;
 
    ll count = 0;
    for (ll i = 1; i * (i + 1) / 2 <= n; i++) {
        double a = (double)(n - i * (i + 1) / 2) / (i + 1);
        if (a - (ll)a == 0) {
            count++;
        }
    }
 
    cout << count << endl;
    return 0;
}