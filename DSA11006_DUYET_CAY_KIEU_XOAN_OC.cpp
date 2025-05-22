#include <bits/stdc++.h>

using namespace std;
struct node{
	int val;
	node *left;
	node *right;
	node(int x){
		val = x;
		left = right = NULL;
	}
};

void makeNode(node *root, int u, int v, char c){
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
}

void insertNode(node *root, int u, int v, int c){
	if(root == NULL) return;
	if(root->val == u){
		makeNode(root, u, v, c);
	} 
	else{
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void Spiral(node *root){
	stack<node*> s1, s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty()){
		while(!s1.empty()){
			node *top = s1.top(); s1.pop();
			cout << top -> val <<" ";
			if(top -> right != NULL){
				s2.push(top -> right);
			}
			if(top -> left != NULL){
				s2.push(top -> left);
			}
		}
		while(!s2.empty()){
			node *top = s2.top(); s2.pop();
			cout << top -> val <<" ";
			if(top -> left != NULL){
				s1.push(top -> left);
			}
			if(top -> right != NULL){
				s1.push(top -> right);
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		node *root = NULL;
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int u, v;
			char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new node(u);
				makeNode(root, u, v, c);
			}
			else{
				insertNode(root, u, v, c);
			}
		}
		Spiral(root);
		cout << endl;
	}
}
