#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, a[1000005], q;
ll D[1000005];

//stack <> unregisterd...

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0) D[0] = a[0];
        else D[i] = a[i] - a[i - 1];
        cout << D[i] << ' ';
    }
    while(q--){
        int l, r, k;
        cin >> l >> r >> k;
        D[l] += k;
        D[r + 1] -= k;
    }
    ll tong = 0;
    for(int i = 0; i < n; i++){
        tong += D[i];
        cout << tong << ' ';
    }
}

// Cho mảng số nguyên A[] gồm N phần tử, có Q thao tác, mỗi thao tác yêu cầu các bạn tăng tất cả các phần tử từ chỉ số L tới chỉ số R lên K đơn vị. Bạn hãy in ra mảng sau khi thực hiện các thao tác trên.

// Input Format

// Dòng 1 là N và Q

// Dòng 2 là N phần tử trong mảng A[]

// Q dòng tiếp theo mỗi dòng là 3 số L, R, K

// Constraints

// 1<=N<=10^6

// 1<=Q<=10^5

// 0<=L<=R<=N-1, 0<=A[i],K<=1000

// Output Format

// In ra mảng sau Q thao tác

// Sample Input 0

// 7 3
// 8 5 8 9 7 6 9 
// 0 5 0
// 0 5 0
// 1 5 1
// Sample Output 0

// 8 6 9 10 8 7 9 