#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	string s; cin >> s;
	int f[1000] = {};
	for(char x : s){
		f[x]++;
	}
	for(int i = 'a'; i <= 'z'; i++)
		cout << f[i] << " ";
    return 0;
}