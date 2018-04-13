#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool t[4][8];
int t1 = 0, t2 = 0, t3 = 0, t4 = 0;

void clockwise(int input) {
	bool tmp = t[input][7];
	for(int i = 7; i > 0; i--) {
		t[input][i] = t[input][i-1];
	}
	t[input][0] = tmp;	
}

void counterclockwise(int input) {
	bool tmp = t[input][0];
	for(int i = 0; i < 7; i++) {
		t[input][i] = t[input][i+1];
	}
	t[input][7] = tmp;
}

bool check_right(int in) {
	if(in < 3 && t[in][2] != t[in+1][6]) return true;
	else return false;
}

void rotate_right(int in, int dir) {
	if(in < 3 && t[in][2] != t[in+1][6]) {
		rotate_right(in+1, -1*dir);
	}
	if(dir == 1) clockwise(in);
	else counterclockwise(in);
}

void rotate_left(int in, int dir) {
	if(in >= 1 && t[in][6] != t[in-1][2]) {
		rotate_left(in-1, -1*dir);
	}
	if(dir == 1) clockwise(in);
	else counterclockwise(in);
}

int main () {
	int cases;
	cin >> cases;
	for(int ppp = 0; ppp < cases; ppp++) {
		int inst;
		cin >> inst;
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 8; j++) {
				cin >> t[i][j];
			}
		}
		
		for(int i = 0; i < inst; i++) {
			int no, dir;
			cin >> no >> dir;
			rotate_right(no-1, dir);
			if(dir == 1) counterclockwise(no-1);
			else clockwise(no-1);
			rotate_left(no-1, dir);
		}
		
		int ret = t[0][0] + 2*t[1][0] + 4*t[2][0] + 8*t[3][0];
		
		printf("#%d %d\n", ppp+1, ret);
	}	
	return 0;
}
