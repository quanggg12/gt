#include <bits/stdc++.h>
#define ll long long

using namespace std;

int pali(string s){
	int n = s.size();
	for(int i = 0; i < n/2; i++){
		if(s[i] != s[n - i - 1]) return 0;
	}
	return 1;
}

int dem(string s){
	int cnt = 0;
	int n = s.size();
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			string sub = s.substr(i, j - i + 1);
			if(pali(sub)) cnt++;
		}
	}
	return cnt;
}


int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	string s; cin >> s;
	cout << dem(s);
    return 0;
}