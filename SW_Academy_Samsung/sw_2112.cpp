#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool table[13][20];

void init_table() {
	for(int i = 0; i < 13; i++) {
		for(int j = 0; j < 20; j++) {
			table[i][j] = false;
		}
	}
}

bool check_line (bool table[13][20], int d, int a, int k){
	int dp[d] = {0, };
	dp[0] = 0;
	for(int i = 1; i < d; i++) {
		if(table[i][a] == table[i-1][a]) {
			dp[i] = dp[i-1]+1;
		}
		
		if(dp[i] >= k-1) return true;
	}
	return false;
}

bool check_all (bool table[13][20], int d, int w, int k) {
	int sum = 0;
	for(int i = 0; i < w; i++) {
		sum += check_line(table, d, i, k);
	}
	if(sum == w) return true;
	return false;
}

int func() {
	int d, w, k;
	cin >> d >> w >> k;
	for(int i = 0; i < d; i++) {
		for(int j = 0; j < w; j++) {
			scanf(" %d", &table[i][j]);
		}
	}
	
	printf("%d\n", check_all (table, d, w, k));
	
	
	
	return 0;
}

int main () {
	int cases;
	cin >> cases;
	for(int i = 0; i < cases; i++) {
//        cout << '#' << i+1 << ' ';

		init_table();
		func();
	}
	return 0;
}
