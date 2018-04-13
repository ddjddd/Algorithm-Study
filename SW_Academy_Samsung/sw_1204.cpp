#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	
	for(int c = 0; c < 10; c++) {
		
		int cases;
		cin >> cases;
		int arr[101] = {0, };
		for(int i = 0; i < 1000; i++) {
			int tmp;
			scanf(" %d", &tmp);
			arr[tmp]++;
		}
		
		int ret = 0, ret_i = 0;
		for(int i = 0; i < 101; i++) {
			if (ret < arr[i]) {
				ret = arr[i];
				ret_i = i;
			}
		}
		printf("#%d %d\n", c+1, ret_i);
	}
	
	
	
	return 0;
}
