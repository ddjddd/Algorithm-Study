#include <stdio.h>

int main () {
	int result = 0, temp = 0, trial = 0;
	
	scanf("%d", &result);
	temp = result;
	do {
		temp = (temp%10)*10 + (temp/10 + temp%10)%10;
		trial++;
	} while (temp != result);
	
	printf("%d", trial);
	
	return 0;
}
