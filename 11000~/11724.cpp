#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int empty(bool visit[], int size) {
	for(int i = 1; i < size; i++) {
		if(visit[i] == false) return i;
	}
	return 0;
}

int main () {
	int node, edge, start = 1, count = 0;
	cin >> node >> edge;
	
	int mtx[node+1][node+1] = {0, };
		
	for(int i = 0; i < edge; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		mtx[x][y] = mtx[y][x] = 1;
	}
	
	bool visit[node+1] = {0, };
	
	while(empty(visit, node+1)) {
		start = empty(visit, node+1);
		stack <int> s;
		s.push(start);
		while(s.empty() != true) {
			int cur = s.top();
			s.pop();
			if(visit[cur] == false) {
				visit[cur] = true;
				for(int i = node; i > 0; i--) {
					if(visit[i] == false && mtx[cur][i] == 1) {
						s.push(i);
					}
				}
			}
		}
		count++;
	}
	
	printf("%d\n", count);

	
	return 0;
}
