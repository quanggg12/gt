#include <bits/stdc++.h>
#define ll long long

using namespace std;


void printPascal(int n) {
    int pascal[n][n];

    for (int line = 0; line < n; line++) {
        for (int i = 0; i <= line; i++) {
           
            if (i == 0 || i == line)
                pascal[line][i] = 1;
            else
                
                pascal[line][i] = pascal[line - 1][i - 1] + pascal[line - 1][i];
        }
    }

    for (int line = 0; line < n; line++) {
        for (int i = 0; i <= line; i++)
            cout << pascal[line][i] << " ";
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;

    printPascal(n);

    return 0;
}
