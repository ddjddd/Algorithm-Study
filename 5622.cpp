#include <stdio.h>
#include <string.h>

int main () {
	char buf[16];
	gets(buf);
	int len = strlen(buf);
	int result = 0;
	int i = 0;
	for(i; i < len; i++) {
		int temp = buf[i] - 'A';
		if(temp >= 'S'-'A') temp--;
		temp /= 3;
		if (temp == 8) temp--;
		temp += 3;
		result += temp;
	}
	printf("%d\n", result);
	return 0;
}
