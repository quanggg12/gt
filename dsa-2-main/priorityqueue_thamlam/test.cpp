#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct cmp{ 
    bool operator()(int a, int b){
        return a % 2 > b % 2; // uu tien chan truoc
    }
};



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[] = {23, 34, 675, 231, 984, 54, 767, 43};
    priority_queue<int> Q; // uu tien lon
    // priority_queue<int, vector<int>, greater<int>()> Q; //uu tien be
    // priority_queue<int, vector<int>, cmp> Q;
    for(int &x : a) Q.push(x);
    while(Q.size()){
        cout << Q.top() << " ";
        Q.pop();
    }
    return 0;
}
