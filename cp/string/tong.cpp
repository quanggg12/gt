#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin, s);
    ll res = 0;
    stringstream ss(s);
    string token, tmp = "";
    while (ss >> token) {
        for (char x : token) {
            if (x >= '0' && x <= '9') {
                tmp += x;
            }
        }
        if (tmp != "") {
            res += stoll(tmp);
            tmp = "";
        }
    }
    cout << res;
    return 0;
}
