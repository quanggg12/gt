#include<bits/stdc++.h>

using namespace std;

#define ll long long
int main(){
	int n, s; cin >> n >> s;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n);
	ll cnt = 0;
	int i = 0, j = n-1;
	while(i < j){
		int sum = a[i] + a[j];
		if(sum == s){
			int x = a[i], y = a[j];
			int d1 = 0, d2 = 0;
			while(i < n && a[i] == x){
				d1++;
				i++;
			}
			while(j >= 0 && a[j] == y){
				d2++;
				j--;
			}
			if(x == y) cnt += (ll)d1*(d1-1)/2;
			else cnt += (ll)d1*d2;
		}
		else if(sum < s) i++;
		else j--;
	}
	cout << cnt;
}
// Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.

// Gợi ý : Sắp xếp mảng tăng dần sau đó với mỗi phần tử a[i] trong mảng tìm xem trong đoạn [i + 1, n - 1] có bao nhiêu phần tử có giá trị là k - a[i], bằng cách tìm vị trí đầu tiên và vị trí cuối cùng của phần tử có giá trị là k - a[i] => Số lượng

// Input Format

// Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

// Constraints

// 2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

// Output Format

// In ra số lượng cặp số có tổng bằng k

// Sample Input 0

// 4 4
// 2 2 2 2
// Sample Output 0

// 6