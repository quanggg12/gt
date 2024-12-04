#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

int N;
int x[100];

void in(int x[]) {
    for (int i = 1; i <= N; i++) cout << x[i];
    cout << endl;
}


void Try(int i) {
    for (int j = 0; j < 1; j++) {
        x[i] = j;
        if (i == N) in(x);
        else Try(i + 1);
    }
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> N;
    Try(1);

    return 0;
}