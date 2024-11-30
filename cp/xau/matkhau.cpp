#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check(string s){
	int so = 0, hoa = 0, th = 0;
	if(s.size() < 8) return 0;
	for(char x : s){
		if(isdigit(x)) so = 1;
		else if(isupper(x)) hoa = 1;
		else if(islower(x)) th = 1;
	}
	return so and hoa and th;
}


int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	string s; cin >> s;
	int a = check(s);
	if(a) cout << "STRONG";
	else cout << "WEAK";
    return 0;
}