#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second != b.second) return a.second < b.second;
	else a.first < b.first;
}
int main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		vector<pair<int,int>> v;
		while(n--){
			int s,e;
			cin >> s >> e;
			v.push_back({s,e});
		}
		sort(begin(v),end(v),cmp);
		int dem = 1;
		int start = v[0].second;
		for(int i = 1; i < v.size();i++){
			if(start <= v[i].first){
				start = v[i].second;
				dem++;
			}
		}
		cout << dem << endl;
		
	}
}
