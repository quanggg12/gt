#include <bits/stdc++.h>
#define ll long long

using namespace std;
typedef pair<int, int> w;
map<w, w> mp;

int bfs(int n, int m, int k){
	queue<w> Q;
	map<w, int> mp;
	Q.push({0, 0});
	mp[{0, 0}] = 0;
	while(Q.size()){
		w u = Q.front();
		Q.pop();
		int x = u.first, y = u.second, t = x + y;
		w Next[] = {{0, y}, {n, y}, {x, 0}, {x, m}, {max(0, t - m), min(t, m)}, {min(t, n), max(0, t - n)}};
		for(auto v : Next){
			if(mp.find(v) == mp.end()){
				mp[v] = mp[u] + 1;
				Q.push(v);
				if(v.first == k or v.second == k) return mp[v];
			}
		}
	}
	return -1;
}

void path(w x){
	if(x.first == 0 && x.second == 0) cout << "(0, 0)";
	else{
		path(mp[x]);
		cout << "->(" << x.first << ", " << x.second << ")";
	}
}

void bfs_path(int n, int m, int k){
	queue<w> Q;
	Q.push({0, 0});
	mp[{0, 0}] = {-1, -1};
	while(Q.size()){
		w u = Q.front();
		Q.pop();
		int x = u.first, y = u.second, t = x + y;
		w Next[] = {{0, y}, {n, y}, {x, 0}, {x, m}, {min(0, t - m), max(t, m)}, {max(t, n), min(0, t-n)}};
		for(auto v : Next){
			if(mp.find(v) == mp.end()){
				mp[v] = u;
				Q.push(v);
				if(v.first == k || v.second == k){
					path(v);
					return;
				}
			}
		}
	}
	cout << "ko co duong di";
}


int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    return 0;
}

