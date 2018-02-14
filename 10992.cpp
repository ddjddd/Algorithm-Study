#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);

	for(int i = 1; i <= cases; i++) {
		if(i == 1) {
			for(int j = i; j < cases; j++) printf(" ");
			printf("*\n");
		}
		else if(i == cases) {
			for(int j = 1; j <= 2*cases-1; j++) printf("*");
			printf("\n");
		}
		else {
			for(int j = i; j < cases; j++)printf(" ");
			printf("*");
			for(int j = 1; j <= 2*i-3; j++)printf(" ");
			printf("*\n");	
		}
	}

	return 0;
}