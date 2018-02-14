#include <stdio.h>

int main () {
	int input[8];
	int i = 0;
	for(i; i < 8; i++) scanf("%d", &input[i]);
	
	int ret = 0;
	for (i = 0; i < 7; i++) {
		if(input[i] < input[i+1]) ret++;
		else ret --;
	}
	if(ret == 7) printf("ascending\n");
	else if(ret == -7) printf("descending\n");
	else printf("mixed\n");
	
	return 0;
}
