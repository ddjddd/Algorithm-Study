#include <stdio.h>
#include <string.h>

int main () {
	int i = 0;
	char input[1000001] = {0, };
	int a[26] = {0, };
	int A[26] = {0, };
	gets(input);
	int length = strlen(input);
	for(i = 0; i < length; i++) {
		if (input[i] < 'a') A[input[i]-'A']++;
		else a[input[i]-'a']++;
	}
	char ret = 0+'A';
	int max = A[0] + a[0];
	for(i = 1; i < 26; i++) {
		if(max < A[i] + a[i]) {
			max = A[i] + a[i];
			ret = i+'A';
		}
		else if(max == A[i] + a[i]) {
			ret = '?';
		}
	}	
	printf("%c\n", ret);
	return 0;
}
