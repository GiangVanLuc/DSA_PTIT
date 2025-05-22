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
int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string s;
		cin >> s;
		map<int,int> mp;
		ll ans = 0;
		for(int i = 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		priority_queue<int> q;
		for(auto x: mp){
			q.push(x.second);
			ans += (ll)pow(x.second,2);
		}
		while(k--){
			int tmp = q.top();
			if(tmp <= 0) break;
			ans -= (ll)pow(tmp,2);
			q.pop();
			tmp--;
			ans += (ll)pow(tmp,2);
			q.push(tmp);
		}
		cout << ans << endl;
	}
}
