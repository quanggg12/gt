#include <bits/stdc++.h>
#define ll long long

using namespace std;

// int main(){
//     ios::sync_with_stdio(false); cin.tie(nullptr);
//     int n; cin >> n;
//     int a[n], c[1000] = {};
//     for(int i = 1; i <= n; i++) cin >> a[i];
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j < i; j++){
//             if(a[j] < a[i] && c[j] > c[i]){
//                 c[i] = c[j];
//             }
//         }
//         c[i]++;
//     }
//     cout << *max_element(c + 1, c + n + 1);
//     return 0;
// }

int main(){
    int n, a; cin >> n;
    vector<int> c;
    while(n--){
        cin >> a;
        if(c.empty() or c.back() < a) c.push_back(a);
        else{
            auto it = lower_bound(c.begin(), c.end(), a);
            *it = a;
        }
    }
    cout << c.size();
}