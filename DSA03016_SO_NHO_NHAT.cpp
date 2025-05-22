#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int s,d;
		cin >> s >> d;
		if(s <= 0 || d <= 0 || s > 1000 || d > 1000){
			cout << - 1 << endl;
			continue;
		}
		if(d*9 < s ){
			cout << "-1" << endl;
			continue;
		}
		int res[d];
		s--;
		for(int i = d - 1; i > 0; i--){
			if(s >= 9){
				res[i] = 9;
				s-=9;
			}
			else{
				res[i] = s;
				s = 0;
			}
		}
		res[0] = s + 1;
		for(int x: res){
			cout << x;
		}
		cout << endl;
	}
}
