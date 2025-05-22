#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) ( x.begin(), x.end() )
#define endl '\n'
void solve(){
	string s;
	int d;
	cin >> d >> s;
	int n = s.size();
	map<char,int> mp;
	for(char x : s) mp[x]++;
	vector<pair<char,int>> v;
	for(auto it: mp){
		v.push_back(it);
	}
	sort(begin(v), end(v),[](pair<char,int> a, pair<char,int> b)->bool{
		return a.second > b.second;
	});
	string res = string(n, ' ');
	
	bool ok = true;
	for(int i = 0; i < v.size(); i++){
		int pos = i; // di tim vi tri dau tien trong xau res chua bi chiem cho
		while(res[pos] != ' ') ++pos;
		// duyet tan suat dien ky tu
		for(int k = 0; k <v[i].second; k++){
			if(pos + k * d >= n){
				ok = false; break;
			}
			res[pos + k * d] = v[i].first;
		}
	}
	if(!ok) cout <<"-1" << endl;
	else{
		cout << 1 << endl;
		//cout << res << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}

