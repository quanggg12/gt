#include <bits/stdc++.h>
#define ll long long

using namespace std;

// c1
// int ss(pair<int, int> u, pair<int, int> v){
//     return u.second < v.second;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, t = -INT_MAX, s= 0;
//     cin >> n;
//     pair<int, int> A[n];
//     for(auto &x : A) cin >> x.first >> x.second;    
//     sort(A, A+n, ss);
//     for(auto x : A){
//         if(x.first >= t){
//             s++;
//             cout << "chon su kien bat dau " << x.first << " kt " << x.second << endl;
//             t = x.second;
//         }
//     }
//     cout << "tong sk: " << s;
//     return 0;
// }


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, t = -INT_MAX, s= 0;
//     cin >> n;
//     pair<int, int> A[n];
//     for(auto &x : A) cin >> x.second >> x.first;    
//     sort(A, A+n);
//     for(auto x : A){
//         if(x.second >= t){
//             s++;
//             t = x.first;
//         }
//     }
//     cout << s;
// }

int main(){
    int n, t = -INT_MAX, s = 0;
    cin >> n;
    vector<pair<int, int>> A(n);
    for(auto &x : A) cin >> x.second >> x.first;
    sort(A.begin(), A.end());
    for(auto x : A){
        if(x.second >= t){
            s++;
            t = x.first;
        }
    }
    cout << s;
}

