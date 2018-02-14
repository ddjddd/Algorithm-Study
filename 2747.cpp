#include <stdio.h>

int arr[46] = {0,1,0, };

void fib() {
	int i = 2;
	for(i; i < 46; i++) {
		arr[i] = arr[i-1] + arr[i-2];
	}
}

int main () {
	int input;
	scanf(" %d", &input);
	fib();
	printf("%d\n", arr[input]);
	return 0;
}
