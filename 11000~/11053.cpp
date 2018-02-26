#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int size;
	scanf("%d", &size);
	
	int *arr = (int *)malloc(sizeof(int)*size);
	memset(arr, 0, sizeof(int)*size);
	int *ret = (int *)malloc(sizeof(int)*size);
	memset(ret, 0, sizeof(int)*size);	
	
	int i = 0;
	for(i; i < size; i++) {
		scanf("%d", &arr[i]);
		ret[i] = 1;
	}
	
	for(i = 1; i < size; i++) {
		int j = 0, max = 0;
		for(j; j < i; j++) {
			if(ret[j] > max && arr[j] < arr[i]) max = ret[j];
		}
		ret[i] += max;
	}
	
	int max = 0;
	for(i = 0; i < size; i++) {
		if(ret[i] > max) max = ret[i];
	}
	printf("%d\n", max);
	return 0;
}
