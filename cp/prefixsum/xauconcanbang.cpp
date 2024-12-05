#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Dem so luong xau con co luong so 0 bang luong so 1
int rs(string s) {
    unordered_map<int, int> pre_count;  
    int pre_sum = 0;  
    int cnt = 0;     
    pre_count[0] = 1; 

    for (char c : s) {
        pre_sum += (c == '1') ? 1 : -1;  
        if (pre_count.find(pre_sum) != pre_count.end()) {
            cnt += pre_count[pre_sum];
        }

        pre_count[pre_sum]++;
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s;
    cin >> s;
    cout << rs(s) << endl;
    return 0;
}
