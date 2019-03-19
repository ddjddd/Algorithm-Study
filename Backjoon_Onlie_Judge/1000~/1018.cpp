#include <iostream>
#include <cstdio>

using namespace std;

char mask[8][8];
char **map;

void fill_mask() {
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			if((i+j)%2) mask[i][j] = 'B';
			else mask[i][j] = 'W';
		}
	}
}

int compare(int si, int sj) {
	int cnt = 0;
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			if(map[i+si][j+sj] == mask[i][j]) cnt++;
		}
	}
	cnt = cnt>32 ? 64-cnt : cnt;
	return cnt;
}

int main () {
	int n, m;
	cin >> n >> m;
	map = new char*[n];
	for(int i = 0; i < n; i++) {
		map[i] = new char[m];
		for(int j = 0; j < m; j++) {
			scanf(" %c", &map[i][j]);
		}
	}
	fill_mask();
	
	int ans = 65;
	for(int i = 0; i < n-7; i++) {
		for(int j = 0; j < m-7; j++) {
			ans = compare(i,j) < ans ? compare(i, j) : ans;
		}
	}
	cout << ans;

	return 0;
}
