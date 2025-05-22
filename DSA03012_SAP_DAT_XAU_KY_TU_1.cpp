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
		string s;
		cin >> s;
		map<char,int> mp;
		for(auto x: s){
			mp[x]++;
		}
		int MAX = INT_MIN;
		for(auto x: mp){
			if(MAX < x.second){
				MAX = x.second;
			}
		}
		if(MAX*2 - 1 > s.size()){
			cout << -1 << endl;
		}
		else cout << 1 << endl;
	}
}

