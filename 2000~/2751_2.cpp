#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int size;
	scanf("%d", &size);
	int *arr = (int*)malloc(sizeof(int)*2000001);
	memset(arr, 0, sizeof(int)*2000001);
	
	int i = 0;
	for(i; i < size; i++) {
		int t = 0;
		scanf(" %d", &t);
		arr[t+1000000]++;
	}
	for(i = 0; i < 2000001; i++) {
		int j = 0, t = arr[i];
		for(j; j < t; j++) {
			printf("%d\n", i-1000000);
		}
	}
	return 0;
}
