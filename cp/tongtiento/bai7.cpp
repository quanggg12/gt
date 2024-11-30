#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[200005];
int f[200005];
//f[i] : so luong coc tra su >= k nam trong doan tu 1 toi i 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, q; cin >> n >> k >> q;
    for(int i = 1; i <= n; i++){
        int l, r; cin >> l >> r;
        a[l] += 1;
        a[r + 1] -= 1;
    }
    for(int i = 1; i <= 200000; i++){
        a[i] += a[i - 1];
    }
    int dem = 0;
    for(int i = 1; i <= 200000; i++){
        if(a[i] >= k) ++dem;
        f[i] = dem;
    }
    while(q--){
        int l, r; cin >> l >> r;
        cout << f[r] - f[l - 1] << endl; // O(1)
    }
}

// Tèo mới lên đại học và kiếm được một công việc tại hàng trà sữa, có không quá 200000 cốc trà sữa xếp thành 1 hàng ngang, ban đầu mỗi cốc trà sữa có độ ngọt bằng 0. Tèo tiến hành liên tiếp N các thao tác, mỗi thao tác anh ta sẽ thêm 1 gam đường vào các cốc trà sữa từ vị trí L tới vị trí R. Sau cùng những cốc trà sữa có lượng đường >= K gam được chuyển đi để phục vụ khách hàng. Có nhiều câu hỏi, mỗi câu hỏi yêu cầu bạn trả lời trong các cốc trà từ thứ L tới thứ R có bao nhiêu cốc đạt chuẩn để bán cho khách hàng ?

// Input Format

// Dòng 1 gồm 3 số N, K, Q với Q là số truy vấn

// N dòng tiếp theo mỗi dòng gồm 2 số L, R (thao tác)

// Q dòng tiếp theo mỗi dòng là 2 số L, R (truy vấn)

// Constraints

// 1<=K<=N<=200000

// 1<=Q<=200000

// 1<=L,R<=200000

// Output Format

// Đối với mỗi truy vấn in ra số lượng cốc trà sữa đạt chuẩn

// Sample Input 0

// 5 3 4
// 2 9
// 5 8
// 2 4
// 2 4
// 1 6
// 3 4
// 5 7
// 5 8
// 5 8
// Sample Output 0

// 2
// 2
// 2
// 2