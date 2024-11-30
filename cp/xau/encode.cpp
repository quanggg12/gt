#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;
// run length encoding
void encode(string a) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        while (i < n - 1 and a[i] == a[i + 1]) {
            cnt++;
            i++;
        }
        cout << cnt << a[i];
    }
}

void decode(string b) {
    int n = b.size();
    for (int i = 0; i < n; i += 2) {
        int cnt = b[i] - '0';
        while (cnt--) {
            cout << b[i + 1];
        }
    }
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    encode(a);
    cout << '\n';
    decode(b);
    return 0;
}