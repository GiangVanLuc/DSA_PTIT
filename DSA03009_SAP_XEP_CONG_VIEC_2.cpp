#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int mod = 1e9 + 7;

struct job{
	int id;
	int deadline;
	int profit;
};

bool cmp(job a, job b){
	return a.profit > b.profit;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		job a[1005];
		for(int i = 0; i < n; i++){
			cin >> a[i].id >> a[i].deadline >> a[i].profit;
		}
		sort(a, a + n, cmp);
		bool used[1005];
		memset(used, false, sizeof(used));
		int res = 0, sum = 0;
		// duyet qua tung job va chon job co profit cao nhat
		for(int i = 0; i <= n- 1; i++){
			// doi voi moi job thu i
			// xet cac moc thoi gian tu deadline - 1 => 0
			// tim slot thoi gian muon nhat con trong truoc deadline
			for(int j = a[i].deadline - 1; j >= 0; j--){
				if(used[j] == false){ // moc thoi gian thu j chua duoc su dung
					used[j] = true; // dan dau moc thoi gian thu da co cong viec thuc hien 
					sum += a[i].profit;
					res++;
					break;
				}
			}
		}
		cout << res <<" "<<sum << endl;
	}	
}

