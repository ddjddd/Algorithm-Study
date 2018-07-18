#include <iostream>

using namespace std;

int main () {
	// freopen("input.txt", "r", stdin);
	int tC; tC = 10;
	for(int tc = 1; tc <= tC; tc++) {
		int dummy; cin >> dummy;
		char arr[100][100];
		for(int i = 0; i < 100; i++) for(int j = 0; j < 100; j++) scanf(" %c", &arr[i][j]);
		for(int len = 100; len >= 1; len--) {
			int count = 0, plen = len/2;
			
			for(int i = 0; i < 100; i++) {
				for(int j = 0; j < 101-len; j++) {
					bool checked = true;
					for(int k = 0; k < plen; k++) {
						if(arr[i][j+k] != arr[i][j+len-k-1]) {
							checked = false;
							break;
						}
					}
					if(checked) {
						count++;
						break;
					}
				}
			}
			for(int i = 0; i < 101-len; i++) {
				for(int j = 0; j < 100; j++) {
					bool checked = true;
					for(int k = 0; k < plen; k++) {
						if(arr[i+k][j] != arr[i+len-k-1][j]) {
							checked = false;
							break;
						}
					}
					if(checked) {
						count++;
						break;
					}
				}
			}
			if(count > 0) {
				printf("#%d %d\n", tc, len);
				break;
			}
		}
	}
	
	return 0;
}
