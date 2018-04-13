#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	for(int c = 0; c < 10; c++) {
		int num;
		cin >> num;
		int* arr = new int[num];
		for (int i = 0; i < num; i++) {
			scanf("%d", &arr[i]);
		}
		int ret = 0;
		
		for (int i = 2; i < num-2; i++) {
			int l = max(arr[i-1], arr[i-2]);
			int r = max(arr[i+1], arr[i+2]);
			int win = max(l, r);
			if(arr[i] > win) ret += arr[i] - win;
		}		
		
		printf("#%d %d\n", c+1, ret);
		delete(arr);
	}	
	
	return 0;
}
