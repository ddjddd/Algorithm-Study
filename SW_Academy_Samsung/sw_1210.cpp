#include <iostream>

using namespace std;

int main () {
	// freopen("input.txt", "r", stdin);
	int tC = 10;
	for(int tc = 1; tc <= tC; tc++) {
		int dummy; cin >> dummy;
		int arr[100][100];
		for(int i = 0; i < 100; i++) for(int j = 0; j < 100; j++) scanf("%d", &arr[i][j]);
		
		int x = 99, y;
		for(int i = 0; i < 100; i++) {
			if(arr[99][i] == 2) {
				y = i; break;
			}
		}
		
		while(x > 0) {
			arr[x][y] = 0;
			if(y < 99 && arr[x][y+1]) y++;
			else if(y > 0 && arr[x][y-1]) y--;
			else x--;
		}
		
		printf("#%d %d\n", tc, y);
	}
}
