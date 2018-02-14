#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);

	for(int i = 1; i <= cases; i++) {
		for(int j = i; j < cases; j++)printf(" ");
		printf("*");
		for(int j = 1; j < i; j++)printf(" *");
		printf("\n");
	}

	return 0;
}