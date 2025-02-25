#include <bits/stdc++.h>

using namespace std;

// thuat toan chuyen ma gray sang ma nhi phan
// bit dau tien cua ma gray va ma nhi phan la giong nhau
// cac bit con lai cua xau nhi phan co duoc bang cach: kiem tra ki tu thu i cua ma gray 
// neu bit thu i cua ma gray la 0 thi bit thu i cua ma nhi phan se copy bit thu i - 1 cua ma nhi phan 
// nguoc lai, thi bit thu i cua ma nhi phan se la lat cua bit thu i - 1 cua ma gray do
int n, ok , a[100];
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		string res ="";
		res+=s[0];
		for(int i = 1; i <= s.size() - 1; i++){
			if(s[i] == '1'){
				if(res[i-1] == '0') res +="1";
				else res+="0";
			}
			else res+=res[i-1];
		}
		cout << res << endl;
	}
}
