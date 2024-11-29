#include <iostream>
using namespace std;


void printPascal(int n) {
    int pascalTriangle[n][n];

    for (int line = 0; line < n; line++) {
        for (int i = 0; i <= line; i++) {
           
            if (i == 0 || i == line)
                pascalTriangle[line][i] = 1;
            else
                
                pascalTriangle[line][i] = pascalTriangle[line - 1][i - 1] + pascalTriangle[line - 1][i];
        }
    }

    for (int line = 0; line < n; line++) {
        for (int i = 0; i <= line; i++)
            cout << pascalTriangle[line][i] << " ";
        cout << endl;
    }
}

int main() {
    int n;

    cin >> n;

    printPascal(n);

    return 0;
}