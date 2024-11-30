#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;

vector<vector<int>> solve(int n, int m) {
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
 
    while (num <= n * m) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;
 
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;
 
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }
 
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }
 
    return matrix;
}
 
void print(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> spiralMatrix = solve(n, m);
    print(spiralMatrix);
    
    return 0;
}
