#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>

using namespace std;

typedef pair<int, int> pos;
struct group {
	vector<pos> p;
	int size;
};

int n, m, aws;
int **map;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector <pos> vz;
vector <group> g;

void set_input() {
	bool** visit = new bool*[n];
	for(int i = 0; i < n; i++) {
		visit[i] = new bool[m];
		for(int j = 0; j < m; j++) {
			visit[i][j] = false;
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(map[i][j] == 2 && !visit[i][j]) {
				stack <pos> s;
				vector <pos> v;
				int size = 1;
				
				
				s.push(make_pair(i, j));
				visit[i][j] = true;
				while(!s.empty()) {
					int tx = s.top().first, ty = s.top().second;
					s.pop();
					for(int k = 0; k < 4; k++) {
						int ttx = tx + dx[k], tty = ty + dy[k];
						if(ttx >= 0 && tty >= 0 && ttx < n && tty < m) {
							if(!visit[ttx][tty]) {
								if(map[ttx][tty] == 2) {
									s.push(make_pair(ttx, tty));
									size++;
								}
								if(!map[ttx][tty]) {
									v.push_back(make_pair(ttx, tty));
								}
								visit[ttx][tty] = true;
							}
						}
					}
				}
				
				for(int i = 0; i < v.size(); i++) {
					visit[v[i].first][v[i].second] = false;
				}
					
				if(v.size() < 3) {					
					vz.insert(vz.end(), v.begin(), v.end());
					
					group new_node;
					new_node.p.insert(new_node.p.begin(), v.begin(), v.end());
					new_node.size = size;
					g.push_back(new_node);
					
				}
			}
		}
	}
	delete(visit);
}

int select_pos() {
	int len = vz.size(), gn = g.size();
	int m = 0;
	
	for(int i = 0; i < len; i++) {
		pos a = vz[i];
		for(int j = i+1; j < len; j++) {
			pos b = vz[j];
			if(a.first != b.first || a.second != b.second) {
				int tmp = 0;
				for(int k = 0; k < gn; k++) {
					group t = g[k];
					if(t.p.size() == 1) {
						if(a == t.p[0] || b == t.p[0]) {
							tmp += t.size;
						}
					}
					else if(t.p.size() == 2) {
						if(a == g[k].p[0] && b == g[k].p[1]) {
							tmp += t.size;
						}
						else if(b == g[k].p[0] && a == g[k].p[1]) {
							tmp += t.size;
						}
					}
				}
				m = max(m, tmp);
			}
		}
	}
	
	for(int j = 0; j < len; j++) {
		pos a = vz[j];
		int tmp = 0;
		for(int k = 0; k < gn; k++) {
			group t = g[k];
			if(t.p.size() == 1) {
				if(a == t.p[0]) {
					tmp += t.size;
				}
			}
		}
		m = max(m, tmp);
	}
	
	return m;
}

int main () {
	scanf("%d %d", &n, &m);
	map = new int*[n];
	for(int i = 0; i < n; i++) {
		map[i] = new int[m];
		for(int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	set_input();	
	cout << select_pos() << endl;
	
	return 0;
}
