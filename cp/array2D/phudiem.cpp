#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int n;
    cin >> n;

    bool covered[101][101] = {}; 

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                covered[x][y] = true; 
            }
        }
    }

    int count = 0;
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            if (covered[x][y]) {
                count++; 
            }
        }
    }

    cout << count << endl;

    return 0;
}
