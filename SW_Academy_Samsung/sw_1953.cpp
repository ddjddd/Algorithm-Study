#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>

using namespace std;

int table[50][50];
int visit[50][50];

typedef pair <int, int> pos;


int main () {
	int cases;
	cin >> cases;
	for(int c = 0; c < cases; c++) {
		int max_x, max_y, i_x, i_y, time;
		cin >> max_x >> max_y >> i_x >> i_y >> time;
		for(int i = 0; i < max_x; i++) {
			for(int j = 0; j < max_y; j++) {
				scanf("%d", &table[i][j]);
				visit[i][j] = false;
			}
		}
		
		visit[i_x][i_y] = true;
		vector <pos> v;
		v.push_back(make_pair(i_x, i_y));
		
		for(int t = 1; t < time; t++) {
			int len = v.size();
			for(int k = 0; k < len; k++) {
				int i = v[k].first;
				int j = v[k].second;
				if(visit[i][j]) {
					switch (table[i][j]) {
						case 1:
							if(i-1 >= 0 && (table[i-1][j] == 2 || table[i-1][j] == 5 || table[i-1][j] == 6 || table[i-1][j] == 1)) visit[i-1][j] = true;
							if(i+1 < max_x && (table[i+1][j] == 2 || table[i+1][j] == 4 || table[i+1][j] == 7 || table[i+1][j] == 1)) visit[i+1][j] = true;
							if(j-1 >= 0 && (table[i][j-1] == 3 || table[i][j-1] == 4 || table[i][j-1] == 5 || table[i][j-1] == 1)) visit[i][j-1] = true;
							if(j+1 < max_y && (table[i][j+1] == 3 || table[i][j+1] == 6 || table[i][j+1] == 7 || table[i][j+1] == 1)) visit[i][j+1] = true;
							break;
						case 2:
							if(i-1 >= 0 && (table[i-1][j] == 2 || table[i-1][j] == 5 || table[i-1][j] == 6 || table[i-1][j] == 1)) visit[i-1][j] = true;
							if(i+1 < max_x && (table[i+1][j] == 2 || table[i+1][j] == 4 || table[i+1][j] == 7 || table[i+1][j] == 1)) visit[i+1][j] = true;
							break;
						case 3:
							if(j-1 >= 0 && (table[i][j-1] == 3 || table[i][j-1] == 4 || table[i][j-1] == 5 || table[i][j-1] == 1)) visit[i][j-1] = true;
							if(j+1 < max_y && (table[i][j+1] == 3 || table[i][j+1] == 6 || table[i][j+1] == 7|| table[i][j+1] == 1)) visit[i][j+1] = true;
							break;
						case 4:
							if(i-1 >= 0 && (table[i-1][j] == 2 || table[i-1][j] == 5 || table[i-1][j] == 6|| table[i-1][j] == 1)) visit[i-1][j] = true;
							if(j+1 < max_y && (table[i][j+1] == 3 || table[i][j+1] == 6 || table[i][j+1] == 7|| table[i][j+1] == 1)) visit[i][j+1] = true;
							break;
						case 5:
							if(i+1 < max_x && (table[i+1][j] == 2 || table[i+1][j] == 4 || table[i+1][j] == 7 || table[i+1][j] == 1)) visit[i+1][j] = true;
							if(j+1 < max_y && (table[i][j+1] == 3 || table[i][j+1] == 6 || table[i][j+1] == 7|| table[i][j+1] == 1)) visit[i][j+1] = true;
							break;
						case 6:
							if(i+1 < max_x && (table[i+1][j] == 2 || table[i+1][j] == 4 || table[i+1][j] == 7 || table[i+1][j] == 1)) visit[i+1][j] = true;
							if(j-1 >= 0 && (table[i][j-1] == 3 || table[i][j-1] == 4 || table[i][j-1] == 5 || table[i][j-1] == 1)) visit[i][j-1] = true;
							break;
						case 7:
							if(i-1 >= 0 && (table[i-1][j] == 2 || table[i-1][j] == 5 || table[i-1][j] == 6 || table[i-1][j] == 1)) visit[i-1][j] = true;
							if(j-1 >= 0 && (table[i][j-1] == 3 || table[i][j-1] == 4 || table[i][j-1] == 5 || table[i][j-1] == 1)) visit[i][j-1] = true;
							break;
						default:
							break;
					}
				}			
			}
			for(int ti = 0; ti < max_x; ti++) {
				for(int tj = 0; tj < max_y; tj++) {
					if(visit[ti][tj]) {
						v.push_back(make_pair(ti, tj));
					}
				}
			}
		}
		
		
		int cnt = 0;
		for(int i = 0; i < max_x; i++) {
			for(int j = 0; j < max_y; j++) {
				if(visit[i][j]) cnt++;
			}
		}
		printf("#%d %d\n", c+1, cnt);
	}	
	
	return 0;
}
