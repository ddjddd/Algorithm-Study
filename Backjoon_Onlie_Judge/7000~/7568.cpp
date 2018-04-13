#include <iostream>
#include <cstdio>

int main () {
	int num;
	scanf("%d", &num);
	int *weight = new int[num];
	int *height = new int[num];
	
	for(int i = 0; i < num; i++) {
		scanf("%d %d", &weight[i], &height[i]);
	}
	
	int *rank = new int[num];
	for(int i = 0; i < num; i++) {
		int k = 1;
		for(int j = 0; j < num; j++) {
			if(weight[i] < weight[j] && height[i] < height[j]) {
				k++;
			}
		}
		rank[i] = k;
	}
	for(int i = 0; i < num; i++) {
		printf("%d ", rank[i]);
	}
	printf("\n");
	return 0;
}
