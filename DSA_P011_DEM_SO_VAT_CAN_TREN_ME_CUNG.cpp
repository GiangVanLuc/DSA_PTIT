#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int h[1000]={0}, c[1000]={0};
	char a[50][50];
	for(int i = 1; i <= n ; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == '#'){
				c[j]++;
				h[i]++;
			}
		}
	}
	int cnt1= 0, cnt2 =0 ;
	int ans = 0;
	for(int i = 1; i <= n; i++){
		if(h[i] != 0){
			cnt1++;
			ans = max(ans, cnt1);
		}
		else cnt1 = 0;
	}
	for(int i = 1; i <= m; i++){
		if(c[i] != 0){
			cnt2++;
			ans = max(ans,cnt2);
		}
		else cnt2= 0;
	}
	cout << ans << endl;
}
