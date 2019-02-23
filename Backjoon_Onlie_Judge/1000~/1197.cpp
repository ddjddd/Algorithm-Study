#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
	int v1, v2, d;
};

int arr[10001] = {0, };

node make_node(int v1, int v2, int d) {
	node ret;
	ret.v1 = v1;
	ret.v2 = v2;
	ret.d = d;
	return ret;
}

int find(int n) {
	if (arr[n] <= 0) return n;
	arr[n] = find(arr[n]);
	return arr[n];
}

void merge(int a, int b) {
	int x, y;
	x = find(a);
	y = find(b);
	if (x == y) return;
	arr[y] = x;
}

int compare(node a, node b) {
	return a.d < b.d;
}

int main () {
	int n, e;
	cin >> n >> e;
	
	vector <node> v;
	
	for(int i = 0; i < e; i++) {
		int a, b, d;
		scanf("%d %d %d", &a, &b, &d);
		v.push_back(make_node(a, b, d));
	}
	sort(v.begin(), v.end(), compare);
	
	int ret = 0;
	for(int i = 0; i < e; i++) {
		int a = find(v[i].v1), b = find(v[i].v2);
		if (a != b) {
			merge(a, b);
			ret += v[i].d;
		}
	}
	
	cout << ret << endl;
	
	return 0;
}
