#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string a, b; cin >> a >> b;
    int n = a.size();
    int m = b.size();
    int res = 0;

    for (int i = 0; i <= n - m; i++) {  
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (a[i + j] != b[j]) {
                match = false;
                break; 
            }
        }
        if (match) res++;
    }

    cout << res;
    return 0;
}


// int main(){
// 	ios::sync_with_stdio(false); cin.tie(nullptr);
// 	string a, b; cin >> a >> b;
// 	int n = a.size();
// 	int res = 0;
// 	for(int i = 0; i < n; i++){
// 		for(int j = i; j < n; j++){
// 			string sub = a.substr(i, j - i + 1);
// 			if(sub == b) res++;
// 		}
// 	}
// 	cout << res;
//     return 0;
// }

