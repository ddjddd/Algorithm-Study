#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int size;
	scanf("%d", &size);
	if(size == 1) return 0;
	
	int i = 2;
	while (i != size) {
		if(size % i == 0) {
			printf("%d\n", i);
			size /= i;
		}
		else {
			i++;
		}
	}
	printf("%d\n", i);
	return 0;
}
