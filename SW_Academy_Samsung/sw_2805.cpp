#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	int cases;
	cin >> cases;
	for(int c = 0; c < cases; c++) {
		int size;
		cin >> size;
		int arr[size][size] = {0, };
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {	
				scanf("%1d", &arr[i][j]);
			}
		}
		
		int ret = 0;
		int t = size/2;
		
		for (int i = t; i >= 0; i--) {
			int j = t - i;
			for(int k = j; k < size-j; k++) {
				ret += arr[i][k];
			}
		}
		for (int i = t+1; i < size; i++) {
			int j = i - t ;
			for(int k = j; k < size-j; k++) {
				ret += arr[i][k];
			}
		}
		
		printf("#%d %d\n", c+1, ret);
	}	
	
	return 0;
}
