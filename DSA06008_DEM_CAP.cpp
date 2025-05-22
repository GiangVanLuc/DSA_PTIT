#include <bits/stdc++.h>
using namespace std;

//Function to find first index of element in array a
//greater than x, you can using upper_bound too.
int upper(int a[], int l, int r, int x){
	int res = -1 ;
	while(l <= r){
		int m = (l+r) / 2;
		if(a[m] > x){
			res = m ;
			r = m - 1;
		}
		else{
			l = m + 1;
		}
	}
	return res;
}

int cnt[5];

int dem(int y[], int m, int x){
	if(x==0) return 0;
	else if (x == 1) return cnt[0];
	int ans = cnt[0] + cnt[1];
	int i1 = upper(y, 0, m-1, x);
	if(i1!=-1) ans += m - i1;
	if(x==2) ans = ans - cnt[3] - cnt[4];
	if(x==3) ans += cnt[2];
	return ans;
}


void TC(){
	int n, m ; cin >> n >> m;
	memset(cnt, 0 , sizeof(cnt));
	int x[n], y[m];
	for(int i = 0; i < n; i++){
		cin >> x[i];
	}
	for(int i = 0; i < m; i++){
		cin >> y[i];
		if(y[i] <= 4){
			cnt[y[i]]++;
		}
	}
	sort(y, y + m);
	long long ans = 0;
	for(int i = 0; i < n; i++){
		ans += dem(y, m, x[i]);
	}
	cout << ans << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		TC();
	}
}
