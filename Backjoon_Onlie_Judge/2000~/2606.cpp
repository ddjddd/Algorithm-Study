#include <iostream>
#include <cstdio>

using namespace std;

int get_parent(int* parent, int i) {
	if(parent[i] == i) return i;
	int p = get_parent(parent, parent[i]);
	parent[i] = p;
	return p;
}

int main () {
	int num; cin >> num;
	int* parent = new int[num+1];
	for(int i = 1; i <= num; i++) {
		parent[i] = i;
	}
	int c; cin >> c;
	for(int i = 0; i < c; i++) {
		int a, b;
		cin >> a >> b;
		
		int ta = get_parent(parent, a);
		int tb = get_parent(parent, b);
		if(ta != tb) {
			parent[tb] = ta;
		}
		
	}
	int count = 0;
	int p1 = get_parent(parent, 1);
	for(int i = 2; i <= num; i++) { 
		if(get_parent(parent, i) == p1) count++;
	}
	printf("%d\n", count);
	return 0;
}
