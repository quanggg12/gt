#include <bits/stdc++.h>
#define ll long long

using namespace std;

void Try(int *x, int k,int n){
    if(k == n) {
        for(int i = 1; i <= k; i++) cout << x[i] << " ";
        cout << endl;
        return;
    }
    for(int t = 0; t <= 1; t++){
        x[k + 1] = t;
        Try(x, k + 1, n);
    }
}

void Try2(string x, int n){                                                                                                                                                                                                                                                                    
    if(x.size() == n) cout << x << endl;
    else{
        // Try2(x + "0", n);
        // Try2(x + "1", n);
        for(char c : {'0','1'}) Try2(x + c, n);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x[1000], n;
    cin >> n;
    // Try(x, 0, n);
    Try2("", n);
    return 0;
}