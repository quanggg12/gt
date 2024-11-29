#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, x[100], cnt = 0;
bool cot[100], cheo1[100], cheo2[100];

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (cot[j] == 0 and cheo1[i - j + n] == 0 and cheo2[i + j - 1] == 0) {
            x[i] = j;
            cot[j] = 1;
            cheo1[i - j + n] = 1;
            cheo2[i + j - 1] = 1;
            if (i == n) cnt++;
            else Try(i + 1);
            cot[j] = 0;
            cheo1[i - j + n] = 0;
            cheo2[i + j - 1] = 0;
        }
    }
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    Try(1);
    cout << cnt;
    return 0;
}