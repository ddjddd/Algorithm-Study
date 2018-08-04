#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef struct Node {
	int x, y;
	int r;
}node;

node new_node(int x, int y, int r) {
	node t;
	t.x = x;
	t.y = y;
	t.r = r;
	return t;
}

double dist(int x, int y, int tx, int ty) {
	return sqrt((tx-x)*(tx-x) + (ty-y)*(ty-y));
}

int main () {
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		int ix, iy, dx, dy;
		cin >> ix >> iy >> dx >> dy;
		int num;
		cin >> num;
		
		vector <node> v;
		v.resize(num);
		int count = 0;
		for(int i = 0; i < num; i++) {
			int x, y, r;
			cin >> x >> y >> r;
			v.push_back(new_node(x, y, r));
			if((dist(x, y, ix, iy) < r) ^ (dist(x, y, dx, dy) < r)){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
