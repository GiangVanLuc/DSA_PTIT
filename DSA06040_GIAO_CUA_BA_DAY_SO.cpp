#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n1,n2,n3; cin >> n1 >> n2 >> n3;
		map<int,int> mp1,mp2,mp3;
		
		set<int> se;
		for(int i = 0; i < n1; i++){
			int x; cin >> x;
			mp1[x]++;
			se.insert(x);
		}
		for(int i = 0; i < n2; i++){
			int x; cin >> x;
			mp2[x]++;
			se.insert(x);
		}
		for(int i = 0; i < n3; i++){
			int x; cin >> x;
			mp3[x]++;
			se.insert(x);
		}
		for(auto x: se) cout << x <<" ";
		int check = 0;
		for(auto x: se){
			if(mp1[x] > 0 && mp2[x] > 0 && mp3[x] > 0){
				cout << x << " ";
				check = 1;
			}
		}
		if(check == 0) cout << - 1 << endl; 
		else cout << endl;
	}
}
