#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;
typedef pair<int, int> pii;

int n, len_w, len_b, ans_white = 0, ans_black = 0;
bool visit_left[21] = {false, }, visit_right[21] = {false, };
vector <pii> vw, vb;

void dfs_white(int start, int depth) {
	if(start < len_w) {
		int x = vw[start].first, y = vw[start].second;
		int ix = x - y + 10, iy = x + y;
		if(!visit_left[ix] && !visit_right[iy]) {
			visit_left[ix] = true;
			visit_right[iy] = true;
			dfs_white(start+1, depth+1);
			visit_left[ix] = false;
			visit_right[iy] = false;
		}
		dfs_white(start+1, depth);
	}
	ans_white = max(ans_white, depth);
}

void dfs_black(int start, int depth) {
	if(start < len_b) {
		int x = vb[start].first, y = vb[start].second;
		int ix = x - y + 10, iy = x + y;
		if(!visit_left[ix] && !visit_right[iy]) {
			visit_left[ix] = true;
			visit_right[iy] = true;
			dfs_black(start+1, depth+1);
			visit_left[ix] = false;
			visit_right[iy] = false;
		}
		dfs_black(start+1, depth);
	}
	ans_black = max(ans_black, depth);
}

int main () {
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			int a;
			scanf("%d", &a);
			if(a){
				if((i+j)%2) vw.push_back(make_pair(i, j));
				else vb.push_back(make_pair(i, j));
			}
		}
	}
	len_w = vw.size();
	len_b = vb.size();
	dfs_white(0, 0);
	dfs_black(0, 0);
	cout << ans_white + ans_black << endl;
	return 0;
}
