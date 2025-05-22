#include <bits/stdc++.h>

using namespace std;

using ll = long long;
bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n), b(n);
		for(int i= 0 ; i < n; i++) cin >> a[i];
		for(int i= 0 ; i < n; i++) cin >> b[i];
		vector<pair<int,int>> v;
		for(int i = 0; i < n; i++){
			v.push_back({a[i],b[i]});
		}
		sort(v.begin(),v.end(),cmp);
		int ans = 1;
		int end_time = v[0].second;
		for(int i= 1 ; i < n; i++){
			if(v[i].first >= end_time){
				ans++;
				end_time = v[i].second;
			}
		}
		cout << ans << endl;
	}
}
