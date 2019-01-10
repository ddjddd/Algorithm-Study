#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
	char name, left, right;
};

node make_node(char n, char l, char r) {
	node nn;
	nn.name = n;
	nn.left = l;
	nn.right = r;
	return nn;
}

int compare(node a, node b) {
	return a.name < b.name;
}

int find(node* v, int n, char name) {
	for(int i = 0; i < n; i++) {
		if(v[i].name == name) {
			return i;
		}
	}
	return -1;
}

void pre(node* v, int n, int c) {
	int l = find(v, n, v[c].left), r = find(v, n, v[c].right);	
	cout << v[c].name;
	if(l != -1) pre(v, n, l);
	if(r != -1) pre(v, n, r);
}

void in(node* v, int n, int c) {
	int l = find(v, n, v[c].left), r = find(v, n, v[c].right);	
	if(l != -1) in(v, n, l);
	cout << v[c].name;
	if(r != -1) in(v, n, r);
}

void post(node* v, int n, int c) {
	int l = find(v, n, v[c].left), r = find(v, n, v[c].right);	
	if(l != -1) post(v, n, l);
	if(r != -1) post(v, n, r);
	cout << v[c].name;
}

int main () {
	int n; cin >> n;
	node* v = new node[n];
	
	for(int i = 0; i < n; i++) {
		cin >> v[i].name >> v[i].left >> v[i].right;
	}
	
	int start = find(v, n, 'A');
	
	pre(v, n, start); cout << '\n';
	in(v, n, start); cout << '\n';
	post(v, n, start); cout << '\n';
	
	return 0;
}
