#include <iostream>
#include <cstdio>
#include <cmath>
#include <queue>

using namespace std;

typedef struct Node {
	int tr;
	int arr[8];
}node;

int main () {
	int cases;
	cin >> cases;
	for(int ppp = 0; ppp < cases; ppp++) {
		int M = 0;
		cin >> M;
		int t[M][M];
		int dp[M][M];
		
		for(int i = 0; i < M; i++) {
			for(int j = 0; j < M; j++) {
				cin >> t[i][j];
			}
		}
		
		queue <node> q;
		node a;
		a.tr = 0;
		a.arr[0] = 1;
		q.push(a);
		
		int N = M/2;
		int iter = N-1;
		int ret = -1;
		while (!q.empty()) {
			node tmp = q.front();
			q.pop();
			if(tmp.tr < iter) {
				for(int i = tmp.arr[tmp.tr]+1; i < M - iter + 2 + tmp.tr; i++) {
					node in;
					in.tr = tmp.tr + 1;
					for(int k = 0; k < in.tr; k++) {
						in.arr[k] = tmp.arr[k];
					}
					in.arr[in.tr] = i;
					q.push(in);
				}
			}
			else {
				int a = 0, b = 0;
				for(int i = 0; i < M; i++) {
					for(int j = 0; j < M; j++){
						bool cc1 = false, cc2 = false;
						for(int k = 0; k <= tmp.tr; k++) {
							if(i == tmp.arr[k]-1) cc1 = true;
						}
						for(int k = 0; k <=   tmp.tr; k++) {
							if(j == tmp.arr[k]-1) cc2 = true;
						}
						if(cc1 && cc2) a += t[i][j];
						else if(!cc1 && !cc2) b += t[i][j];
					}
				}
				if(ret == -1) ret = abs(a-b);
				else ret = min(ret, abs(a-b));
			}
		}
		printf("#%d %d\n", ppp+1, ret);
	}	
	return 0;
}
