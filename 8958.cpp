#include <stdio.h>
#include <string.h>

int main () {
	int cases;
	scanf(" %d\n", &cases);
	
	char buf[81];
	while(cases > 0) {
		gets(buf);
		int combo = 1, i, ret = 0;
		for(i = 0; i < strlen(buf); i++) {
			if(buf[i] == 'O') {
				ret += combo;
				combo++;
			}
			else combo = 1;
		}
		printf("%d\n", ret);
		cases--;
	}
	return 0;
}
