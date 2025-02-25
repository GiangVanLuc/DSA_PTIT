#include <bits/stdc++.h>

using namespace std;

// thuat toan chuyen ma nhi phan sang ma gray
// bit dau tien cua ma gray va ma nhi phan la giong nhau
// cac bit con lai o vi tri i cua ma gray co duoc bang cach XOR 2 bit thu i va thu i - 1 xau nhi phan
int n, ok , a[100];
string s;

int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		for(int i = 1; i <= s.size() - 1; i++){
			if(s[i] == s[i-1]) s[i] = '0';
			else s[i] = '1';
		}
		cout << s << endl;
	}
}
