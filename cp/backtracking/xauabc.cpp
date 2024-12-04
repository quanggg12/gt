#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

void solve(int n, string s) {
    if (s.size() == n) {
        cout << s << endl;
        return;
    }

    if (s.empty() || s.back() != 'A') {
        solve(n, s + 'A');
    }
    if (s.empty() || s.back() != 'B') {
        solve(n, s + 'B');
    }
    if (s.empty() || s.back() != 'C') {
        solve(n, s + 'C');
    }

}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    solve(n, "");
    return 0;
}