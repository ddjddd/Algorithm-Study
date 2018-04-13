#include <stdio.h>

int func(int input) {
	int i = 0, n5 = 0;
	for(i = 5; i <= input; i+=5) {
		int n = i;
		while(n%5 == 0) {
			n/=5; n5++;
		}
	}
	return n5;
}

int main () {
	int input;
	scanf("%d", &input);
	if(input < 5) {
		printf("0\n");
		return 0;
	}	
	printf("%d\n", func(input));
	return 0;
}
