#include <bits/stdc++.h>
#define ll long long

using namespace std;
// hay in ra tat ca cac chinh hop chap k cua cac so nguyen duong 1, 2,..., n

void solve(vector<int>& nums, int k, vector<int>& per) {
    if (per.size() == k) {
        for (int x : per) {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (find(per.begin(), per.end(), nums[i]) == per.end()) {
            per.push_back(nums[i]);
            solve(nums, k, per);
            per.pop_back();
        }
    }
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }
    vector<int> per;
    solve(nums, k, per);
    return 0;
}