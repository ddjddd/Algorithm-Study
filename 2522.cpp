#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	for(int i = 1; i <= cases; i++) {
		for(int j = cases-1; j >= i; j--)printf(" ");
		for(int j = 1; j <= i; j++)printf("*");
		printf("\n");
	}
	for(int i = cases-1; i > 0; i--) {
		for(int j = cases-1; j >= i; j--)printf(" ");
		for(int j = 1; j <= i; j++)printf("*");
		printf("\n");
	}
	return 0;
}