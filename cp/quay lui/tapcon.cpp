#include <bits/stdc++.h>
#define ll long long

using namespace std;
// liet ke cac tap con do dai k cua tap S = {1, 2,..., n}

void solve(int n, int k, int index, vector<int>& sub) {
    if (sub.size() == k) {
        for (int x : sub) cout << x << " ";
        cout << endl;
        return;
    }
    for (int i = index; i <= n; i++) {
        sub.push_back(i);
        solve(n, k, i + 1, sub);
        sub.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<int> sub;
    solve(n, k, 1, sub);
    return 0;
}