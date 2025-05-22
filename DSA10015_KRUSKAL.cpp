#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct canh {
	int x, y, w;
};

const int maxn = 1001;
int sz[maxn], parent[maxn], n, m;
vector<canh> dscanh;
vector<int> ke[maxn];

int find(int u) {
	if(u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

bool Union(int a, int b) {
	a = find(a);
	b = find(b);
	if(a == b) return false;
	if (a < b) swap(a, b);
	sz[a] += sz[b];
	parent[b] = a;
	return true;
}

void nhap() {
	for(int i = 0; i <= n; ++i){
		ke[i].clear();
	}
	dscanh.clear();
	cin >> n >> m;
	for(int i = 1; i <= m; i++) {
		int x, y , w;
		cin >> x >> y >> w;
		dscanh.push_back({x, y, w});
	}
	for(int i = 1; i <= n; i++) {
		parent[i] = i;
		sz[i] = 1;
	}
}

void kruskal() {
	sort(begin(dscanh), end(dscanh), [](canh a, canh b) {
		return a.w < b.w;
	});
	int ans = 0;
	vector<canh> tree;
	for(int i = 0; i < m; i++) {
		if(tree.size() == n - 1) break;
		if(Union(dscanh[i].x, dscanh[i].y)) {
			tree.push_back(dscanh[i]);
			ans += dscanh[i].w;
		}
	}
	cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) {
		nhap();
		kruskal();
	}
}

