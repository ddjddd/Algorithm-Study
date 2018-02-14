#include <stdio.h>
#include <string.h>

int main () {
	int cases;
	scanf(" %d", &cases);
	
	int i = 0;
	for(i; i < cases; i++) {
		char temp[51];
		scanf(" %s", temp);
		int j = 0, l = strlen(temp), cnt = 0, invalid = 0;
		for(; j < l; j++) {
			if(temp[j] == '(') {
				cnt++;
			}
			else if(cnt != 0 && temp[j] == ')') {
				cnt--;
			}
			else {
				invalid = 1;
			}
		}
		if(invalid == 1 || cnt != 0){
			printf("NO\n");
		}
		else {
			printf("YES\n");
		}
	}
	return 0;
}
