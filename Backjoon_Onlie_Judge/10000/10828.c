#include <stdio.h>
#include <string.h>

#define MAX 10001

int stack[MAX];
int top = -1;

int main () {
	int i = 0;
	for(; i < MAX; i++) {
		stack[i] = 0;
	}
	
	int inst;
	scanf("%d", &inst);
	
	char temp[6];
	for(i = 0; i < inst; i++) {
		scanf("%s", temp);
		if(strncmp(temp, "push", 5) == 0) {
			int tmpVal;
			scanf("%d", &tmpVal);
			top++;
			stack[top] = tmpVal;
		}
		else if(strncmp(temp, "pop", 3) == 0) {
			if(top != -1) {
				printf("%d\n", stack[top]);
				top--;	
			}
			else printf("-1\n");
		}
		else if(strncmp(temp, "size", 4) == 0) {
			printf("%d\n", top+1);
		}
		else if(strncmp(temp, "empty", 5) == 0) {
			if(top == -1) printf("1\n");
			else printf("0\n");
		}
		else if(strncmp(temp, "top", 3) == 0) {
			if(top != -1) {
				printf("%d\n", stack[top]);
			}
			else printf("-1\n");
		}
	}	
	return 0;
}
