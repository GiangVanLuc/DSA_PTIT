#include <bits/stdc++.h>

using namespace std;
vector<int> trai(vector<int> a){
	vector<int> b(6);
	b[2] = a[2];
	b[5] = a[5];
	b[0] = a[3];
	b[1] = a[0];
	b[3] = a[4];
	b[4] = a[1];
	return b;
}

vector<int> phai(vector<int> a){
	vector<int> b(6);
	b[0] = a[0];
	b[1] = a[4];
	b[2] = a[1];
	b[3] = a[3];
	b[4] = a[5];
	b[5] = a[2];
	return b;
}

bool cmp(vector<int> a, vector<int> b){
	for(int i = 0; i < 6; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}

int TC(){
	vector<int> a(6), b(6);
	for(int i = 0; i < 6; i++) cin >> a[i];
	for(int i = 0; i < 6; i++) cin >> b[i];
	queue<pair<vector<int>,int>> q;
	q.push({a, 0});
	while(true){
		pair<vector<int>, int> top = q.front(); q.pop();
		if(cmp(top.first,b)){
			return top.second;
		}
		q.push({trai(top.first), top.second + 1});
		q.push({phai(top.first), top.second + 1});
	}
}


int main(){
	int t; cin >> t;
	while(t--){
		cout << TC() << '\n';
	}
}
