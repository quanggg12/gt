#include <bits/stdc++.h>
#define ll long long

using namespace std;

typedef pair<int, int> p;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, k; cin >> n >> k;
//     int x;
//     priority_queue<p> Q;
//     for(int i = 1; i <= n; i++){
//         cin >> x;
//         Q.push({x, i});
//         if(i >= k){
//             while(i - Q.top().second >= k){
//                 Q.pop();
//             }
//             cout << Q.top().first << " ";
//         }
//     }
//     return 0;
// }

//hang doi 2 dau

// int main(){
//     int n, k; cin >> n >> k;
//     deque<p> Q;
//     for(int i = 1; i <= n; i++){
//         int x; cin >> x;
//         while(Q.size() && Q.back().first <= x) Q.pop_back();
//         Q.push_back({x, i});
//         while(i - Q.front().second >= k) Q.pop_front();
//         if(i >= k) cout << Q.front().first << " ";
//     }
// }


int main(){
    int n; cin >> n;
    priority_queue<p> Q;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        Q.push({x, i});
        cout << Q.top().first << " ";
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        cout << Q.top().second << " ";
    }
}