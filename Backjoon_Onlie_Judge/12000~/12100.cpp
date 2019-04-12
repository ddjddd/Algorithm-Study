#include <iostream>

using namespace std;

int n, ans = 0;
int arr[20][20];

void copy(int dst[][20], int input[][20]) {
	for(int i = 0; i < n; i++)
	for(int j = 0; j < n; j++)
		dst[i][j] = input[i][j];
}


void change_hor() {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n/2; j++) {
			int tmp = arr[i][j];
			arr[i][j] = arr[i][n-1-j];
			arr[i][n-1-j] = tmp;
		}
	}
}


void change_ver() {
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < n/2; i++) {
			int tmp = arr[i][j];
			arr[i][j] = arr[n-1-i][j];
			arr[n-1-i][j] = tmp;
		}
	}
}


void move_up() {
	for(int j = 0; j < n; j++) {
		int ti = 0;
		int tarr[20] = {0, };
		for(int i = 0; i < n; i++)
			if(arr[i][j] != 0) tarr[ti++] = arr[i][j];
		ti = 0;
		
		for(int i = 0; i < n; i++) {	
			if(i < n-1 && tarr[i] == tarr[i+1]) {
				tarr[ti++] = 2*tarr[i++];
			}
			else {
				tarr[ti++] = tarr[i];
			}
		}
		for(int i = ti; i < n; i++)
			tarr[i] = 0;
		for(int i = 0; i < n; i++) {
			arr[i][j] = tarr[i];
		}
	}
}


void move_left() {
	for(int i = 0; i < n; i++) {
		int ti = 0;
		int tarr[20] = {0, };
		for(int j = 0; j < n; j++) 
			if(arr[i][j] != 0) tarr[ti++] = arr[i][j];
		ti = 0;
		
		for(int j = 0; j < n; j++) {	
			if(j < n-1 && tarr[j] == tarr[j+1]) {
				tarr[ti++] = 2*tarr[j++];
			}
			else {
				tarr[ti++] = tarr[j];
			}
		}
		for(int j = ti; j < n; j++)
			tarr[j] = 0;
		for(int j = 0; j < n; j++) {
			arr[i][j] = tarr[j];
		}
	}
}


void move(int dir) {
	switch(dir) {
		case 0:
			move_up();
			break;
		case 1:
			move_left();
			break;
		case 2:
			change_ver();
			move_up();
			change_ver();
			break;
		case 3:
			change_hor();
			move_left();
			change_hor();
			break;
		default:
			break;		
	}
}


void dfs(int depth) {
	if(depth == 5) {
		for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) 
			ans = max(ans, arr[i][j]);
		return;
	}
	
	for(int i = 0; i < 4; i++) {
		int tmp[20][20] = {0, };
		copy(tmp, arr);
		move(i);
		dfs(depth+1);
		copy(arr, tmp);
	}
}


int main () {
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	dfs(0);
	
	cout << ans << endl;
	
	return 0;
}
