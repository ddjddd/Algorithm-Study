#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int cases;
	scanf("%d", &cases);

	int* arr = (int*)malloc(sizeof(int)*(cases+1));
	memset(arr, 0, sizeof(int)*(cases+1));

	for(int i = 1; i < cases; i++) {
		if(i*1 <= cases && (arr[i+1] == 0 || arr[i+1] > arr[i] + 1)) {
			arr[i+1] = arr[i] + 1;
		}
		if(i*2 <= cases && (arr[i*2] == 0 || arr[i*2] > arr[i] + 1)) {
			arr[i*2] = arr[i] + 1;
		}
		if(i*3 <= cases && (arr[i*3] == 0 || arr[i*3] > arr[i] + 1)) {
			arr[i*3] = arr[i] + 1;
		}		
	}
	printf("%d\n", arr[cases]);
	return 0;
}