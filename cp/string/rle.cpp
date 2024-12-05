#include <bits/stdc++.h>
#define ll long long

using namespace std;

string encode(string s) {
    string rs = "";
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        rs += to_string(count) + s[i];
    }
    return rs;
}

string decode(string s) {
    string rs = "";
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int count = 0;
        while (isdigit(s[i])) {
            count = count * 10 + (s[i] - '0');
            i++;
        }
        rs.append(count, s[i]);
    }
    return rs;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string a, b;
    cin >> a >> b;

    cout << encode(a) << endl;
    cout << decode(b) << endl;

    return 0;
}
// Input:
// aabbbbccccc
// 1a1b1c
// Output:
// 2a4b5c
// abc
