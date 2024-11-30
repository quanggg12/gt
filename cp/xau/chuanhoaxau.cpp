#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

string solve(string s) {
    string res = "";
    stringstream ss(s);
    string tmp;
    while (ss >> tmp) {
        if (!res.empty()) res += " ";
        // if (!tmp.empty()) {
            tmp[0] = toupper(tmp[0]);
            for (int i = 1; i < (int)tmp.size(); i++) {
                tmp[i] = tolower(tmp[i]);
            }
            res += tmp;
        // }
    }
    return res;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin, s);
    string res = solve(s);
    cout << res;
    return 0;
}