#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin, s);
    int res = 0;
    stringstream ss(s);
    string token, tmp = "";
    while (ss >> token) {
        for (char x : token) {
            if (x >= '0' && x <= '9') {
                tmp += x;
            }
        }
        if (tmp != "") {
            res += stoi(tmp);
            tmp = "";
        }
    }
    cout << res;
    return 0;
}