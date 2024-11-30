#include <bits/stdc++.h>
#define ll long long

using namespace std;

// dem so luong xau con co so luong so 0 bang so luong so 1
int rs(const string& s) {
    unordered_map<int, int> prefixCount;
    int prefixSum = 0;
    int count = 0;
 
   
    prefixCount[0] = 1;
 
    for (char c : s) {
  
        prefixSum += (c == '1' ? 1 : -1);
 
        
        if (prefixCount.find(prefixSum) != prefixCount.end()) {
            count += prefixCount[prefixSum];
        }
 
        prefixCount[prefixSum]++;
    }
 
    return count;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s;
    cin >> s;
    cout << rs(s) << endl;
    return 0;
}
