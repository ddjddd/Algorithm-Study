#include <iostream>
#include <cstdio>

using namespace std;

int arr[9][9] = {0, };


bool check_a_row(int row) {
	bool dp[10];
	for(int i = 1; i < 10; i++) {
		dp[i] = false;
	}
	for(int i = 0; i < 9; i++) {
		dp[arr[i][row]] = true;
	}
	for(int i = 1; i < 10; i++) {
		if (dp[i] != true) return false;
	}
	return true;
}

bool check_a_column(int column) {
	bool dp[10];
	for(int i = 1; i < 10; i++) {
		dp[i] = false;
	}
	for(int i = 0; i < 9; i++) {
		dp[arr[column][i]] = true;
	}
	for(int i = 1; i < 10; i++) {
		if (dp[i] != true) return false;
	}
	return true;
}

bool check_a_box(int x, int y){
	bool dp[10];
	for(int i = 1; i < 10; i++) {
		dp[i] = false;
	}
	for(int i = x; i < x+3; i++) {
		for(int j = y; j < y+3; j++) {
			dp[arr[i][j]] = true;
		}
	}
	for(int i = 1; i < 10; i++) {
		if (dp[i] != true) return false;
	}
	return true;
}

bool check() {
	for(int i = 0; i < 9; i++) {
		if(!check_a_row(i)) return false;
		if(!check_a_column(i)) return false;
	}
	for(int i = 0; i < 9; i+=3) {
		for(int j = 0; j < 9; j+=3) {
			if(!check_a_box(i, j)) return false;
		}
	}	
	
	return true;
}

int main () {
	int cases;
	cin >> cases;
	for(int c = 0; c < cases; c++) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {	
				scanf("%d", &arr[i][j]);
			}
		}
		
		bool ret = check();
		
		
		printf("#%d %d\n", c+1, ret);
	}	
	
	return 0;
}
