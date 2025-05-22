#include <bits/stdc++.h>


using namespace std;
void tc(){
	int n; cin >> n;
	stack<int> st;
	int a[n];
	long long res = INT_MIN;
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	int i = 0;
	while(i < n){
		if(st.empty() || a[i] >= a[st.top()]){
			st.push(i);
			++i;
		}
		else{
			int idx = st.top(); // chi so cua cot o dinh stack
			st.pop();
			// tinh toan hcn tao boi cot hien ta, trong do cot hien tai duoc 
			// coi la cot ngan nhat cua hcn do
			if(st.empty()){	
				res = max(res, 1ll * i * a[idx]);
				
			}
			else{
				res = max(res,1ll *  a[idx] * (i - st.top() - 1));
			}
		}
	}
	while(!st.empty()){
		int idx = st.top(); // chi so cua cot o dinh stack
		st.pop();
		// tinh toan hcn tao boi cot hien ta, trong do cot hien tai duoc 
		// coi la cot ngan nhat cua hcn do
		if(st.empty()){
			res = max(res,1ll * i * a[idx]);
		}
		else{
			res = max(res,1ll * a[idx] * (i - st.top() - 1));
		}
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		tc();
	}
}
