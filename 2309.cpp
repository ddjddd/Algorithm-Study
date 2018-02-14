#include <stdio.h>

int dwarf[9] = {0, };

int sum ( ) {
	int ret = 0;
	for(int i = 0; i < 9; i++) {
		ret += dwarf[i];
	}
	return ret;
}

int main () {
	for(int i = 0; i < 9; i++) {
		scanf("%d", &dwarf[i]);
	}
	int total = sum();
	int temp[7];
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			if(i != j) {
				if(total - dwarf[i] - dwarf[j] == 100) {
					int k = 0, l = 0;
					for(k; k < 9; k++) {
						if(k != i && k != j) {
							temp[l++] = dwarf[k];
						}
					}
				}
			}
		}
	}
	for(int i = 1; i < 7; i++) {
		int tt = temp[i];
		for(int j = i; j > 0; j--) {
			if(temp[j-1] > tt) {
				temp[j] = temp[j-1];
				if(j==1){
					temp[j-1] = tt;
					break;
				}
			}
			else {
				temp[j] = tt;
				break;
			}
		}
	}

	for(int i = 0; i < 7; i++) {
		printf("%d\n", temp[i]);
	}

	return 0;
}