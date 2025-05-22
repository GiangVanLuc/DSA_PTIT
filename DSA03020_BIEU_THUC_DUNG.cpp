#include <bits/stdc++.h>

using namespace std;
void solve(){
	string s;
	cin >> s;
	vector<int> v;
	for(int i = 0; i < s.size();i++){
		if(s[i] == '[') v.push_back(i);
	}
	int res = 0
	int cnt = 0, trace = 0;
	for(int i = 0 ; i < s.size(); i++){
		if(s[i] == '['){
			++cnt;
			++trace;
		}
		else if(s[i] == ']') --cnt;
		// vi tri ki tu ko hop le
		if(cnt < 0){
			res += v[trace] - i;
			swap(s[i], s[v[trace]]);
			cnt = 1;
			++trace;
		}
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
