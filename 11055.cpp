#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int size;
	scanf("%d", &size);
	
	int *arr = (int *)malloc(sizeof(int)*size);
	memset(arr, 0, sizeof(int)*size);
	int *sum = (int *)malloc(sizeof(int)*size);
	memset(sum, 0, sizeof(int)*size);
	
	int i = 0;
	for(i; i < size; i++) {
		scanf("%d", &arr[i]);
		sum[i] = arr[i];
	}
	sum[0] = arr[0];
	
	for(i = 1; i < size; i++) {
		int j = 0, max = 0, index = -1;
		for(j; j < i; j++) {
			if(sum[j] > max && arr[j] < arr[i]) {
				max = sum[j];
				index = j;	
			}
		}
		if(index!= -1) {
			sum[i] = sum[index] + arr[i];
		}
	}
	int max = 0, index = 0;
	for(i = 0; i < size; i++) {
		if(sum[i] > max) {
			max = sum[i];
		}
	}
	printf("%d\n", max);
	return 0;
}
