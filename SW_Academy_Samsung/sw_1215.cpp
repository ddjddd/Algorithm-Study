#include <iostream>

using namespace std;

int main () {
	// freopen("input.txt", "r", stdin);
	int tC; tC = 10;
	for(int tc = 1; tc <= tC; tc++) {
		int len; scanf("%d", &len);
		char arr[8][8];
		for(int i = 0; i < 8; i++) for(int j = 0; j < 8; j++) scanf(" %c", &arr[i][j]);
		int count = 0;
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < 9-len; j++) {
				bool checked = true;
				for(int k = 0; k < len/2; k++) {
					if(arr[i][j+k] != arr[i][j+len-k-1]) {
						checked = false;
						break;
					}
				}
				if(checked) {
					count++;
				}
			}
		}
		for(int i = 0; i < 9-len; i++) {
			for(int j = 0; j < 8; j++) {
				bool checked = true;
				for(int k = 0; k < len/2; k++) {
					if(arr[i+k][j] != arr[i+len-k-1][j]) {
						checked = false;
						break;
					}
				}
				if(checked) {
					count++;
				}
			}
		}
		printf("#%d %d\n", tc, count);
		
	}
	
	
	return 0;
}
