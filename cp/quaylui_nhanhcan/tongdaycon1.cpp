#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MOD = 1000000007;
const int MX = 100001;
// Cho mảng A và số tự nhiên k. Đưa ra các dãy con của mảng A sao cho tổng các phần tử dãy con đó bằng k
// Các dãy số A là nguyên dương và ko có các phần tử giống nhau
// VD: A[] = {5, 10, 15, 20, 25}, k = 50 -> {5 10 15 20} {5 20 25} {10 15 25}
int n, a[100], S, X[100];
vector<int> v;

void nhap() {
    cin >> n >> S;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
}

void Try(int pos, int sum) {
    for (int j = pos; j < n; j++) {
        // X[i] = a[j];
        v.push_back(a[j]);
        sum += a[j];
        if (sum == S) {
            cout << "[";
            for (int k = 0; k < v.size(); k++) {
                cout << v[k];
                if (k != v.size() - 1) cout << " ";
                else cout << "]\n";
            }
        }
        else if (sum < S) {
            Try(j + 1, sum);
        }
        sum -= a[j];
        v.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    nhap();
    Try(0, 0);      
    return 0;
}