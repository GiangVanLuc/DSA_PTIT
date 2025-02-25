#include <bits/stdc++.h>

using namespace std;
int nt(int n){
	for(int i= 2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n > 1;
}
int digit(int n){
	int s= 0;
	while(n){
		if(n%10 != 2 && n%10 != 3 && n%10 != 5 && n%10 != 7){
			return 0;
		}
		s+=n%10;
		n/=10;
	}
	return 1 && nt(s);
}
int main(){
	int t ; cin >> t;
	while(t--){
		int a,b; cin >> a>> b;
		int cnt = 0;
		for(int i =a;i<=b;i++){
			if(digit(i) && nt(i)){
				cnt++;
			}
		}
		cout <<cnt <<endl;
	}
}
