#include <bits/stdc++.h>
#define ll long long

using namespace std;

int ham1(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l + r)/ 2;
        if(a[mid] == x){
            res = mid;
            r = mid - 1;
        }
        else if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return res;
}

int ham2(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            l = mid + 1;
        }
        else if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return res;
}

int ham3(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] >= x){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int ham4(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] > x){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int ham5(int a[], int l, int r, int x){
    int t1 = ham1(a, l, r, x);
    int t2 = ham2(a, l, r, x);
    if(t1 == -1) return 0;
    return t2-t1+1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x; cin >> n >> x;
    int a[n];
    int l = 0, r = n-1;
    for(int &x : a) cin >> x;
    cout << ham1(a, l, r, x) << endl;
    cout << ham2(a, l, r, x) << endl;
    cout << ham3(a, l, r, x) << endl;
    cout << ham4(a, l, r, x) << endl;
    cout << ham5(a, l, r, x) << endl;
    return 0;
}

// Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) :

// Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.

// Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1.

// Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.

// Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.

// Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

// Input Format

// Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^6; 0<=A[i],X<=10^6;

// Output Format

// In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.

// Sample Input 0

// 10 1160
// 19 1600 2172 2921 3409 4185 4639 6098 6744 9192 
// Sample Output 0

// -1
// -1
// 1
// 1
// 0