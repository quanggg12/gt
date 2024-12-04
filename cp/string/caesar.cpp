#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin, s);
    int k; cin >> k;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            cout << char((c - 'a' + k) % 26 + 'a');
        } else if (c >= 'A' && c <= 'Z') {
            cout << char((c - 'A' + k) % 26 + 'A');
        } else {
            cout << c;
        }
    }
    
    return 0;
}