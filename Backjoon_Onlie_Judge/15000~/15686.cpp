#include <iostream>
#include <vector>

#define abs(x) ((x) < 0 ? (-(x)) : (x))

using namespace std;

int n, m;
int map[50][50];
vector<pair<int, int> > home, chick;
int hn, cn, ret = 1000000;
bool* c_arr;

int dist(int x1, int y1, int x2, int y2) {
	return abs(x1-x2) + abs(y1-y2);
}

int calc() {
	int tmp_sum = 0;
	for(int i = 0; i < hn; i++) {
		int tmp_min = 100000;
		for(int j = 0; j < cn; j++) {
			if(c_arr[j]) {
				int tmp = dist(home[i].first, home[i].second, chick[j].first, chick[j].second);
				tmp_min = min(tmp_min, tmp);
			}
		}
		tmp_sum += tmp_min;
	}
	return tmp_sum;
}


void dfs(int depth, int cur) {
	if(depth == m) {
		ret = min(ret, calc());
		return;
	}
		
	for(int i = cur; i < cn; i++) {
		c_arr[i] = true;
		dfs(depth+1, i+1);
		c_arr[i] = false;
	}
}

int main () {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			int a;
			cin >> a;
			if(a == 1) home.push_back(make_pair(i, j));
			if(a == 2) chick.push_back(make_pair(i, j));
		}
	}
	hn = home.size();
	cn = chick.size();
	
	c_arr = new bool[chick.size()]();
//	for(int i = 0; i < cn; i++) {
//		c_arr[i] = false;
//	}
	dfs(0, 0);
	cout << ret;
	return 0;
}
