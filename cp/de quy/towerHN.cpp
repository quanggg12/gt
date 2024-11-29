// https://cses.fi/problemset/task/2165

#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void solve(int n, int a, int b, int c, vector<pair<int, int>>& moves) {
    if (n == 0) {
        return;
    }
    solve(n - 1, a, c, b, moves);
    moves.emplace_back(a, b);
    solve(n - 1, c, b, a, moves);
}
 
 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> moves;
    solve(n, 1, 3, 2, moves);
    cout << moves.size() << "\n";
    for (const auto& [a, b] : moves) {
        cout << a << " " << b << "\n";
    }
    return 0;
