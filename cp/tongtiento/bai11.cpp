#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            
            for (int k = 0; k < N; k++) {
                if (k == i || k == j) continue; 
                if (A[i] + A[j] + A[k] == K) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}

// Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 3 phần tử A[i], A[j], A[k] với i, j, k khác nhau và A[i] + A[j] + A[k] = K hay không ?

// Input Format

// Dòng đầu tiên là N và K

// Dòng thứ 2 là N số trong mảng A[]

// Constraints

// 1<=N<=10^5

// 1<=A[i],K<=10^9

// Output Format

// In ra YES nếu tồn tại, ngược lại in ra NO

// Sample Input 0

// 7 5
// 7 2 5 10 10 8 8 
// Sample Output 0

// NO
// Sample Input 1

// 7 13
// 1 7 6 3 3 1 8 
// Sample Output 1

// YES