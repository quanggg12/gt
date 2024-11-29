#include <bits/stdc++.h>
using namespace std;

void printPermutations(vector<int>& nums) {
    do {
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 1; i <= n; i++) {
        nums[i - 1] = i;
    }

    printPermutations(nums);

    return 0;
}