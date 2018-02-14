#include <stdio.h>
#include <string.h>

int stack[2][30] = {0, };
int top = -1;

int main () {
	char buf[31];
	scanf(" %s", buf);
	int i = 0, len = strlen(buf);
	int ret = 0, temp = 1, t = 0;
	for(i; i < len; i++) {
		if(buf[i] == '(') {
			stack[0][++top] = 2;
			if(temp != 1) {
				stack[1][top] = temp;
				temp = 1;
			}
			else {
				stack[1][top] = 0;
			}
		}
		else if(buf[i] == '[') {
			stack[0][++top] = 3;
			if(temp != 1) {
				stack[1][top] = temp;
				temp = 1;
			}
			else {
				stack[1][top] = 0;
			}
		}
		else if(buf[i] == ')') {
			if(top != -1 && stack[0][top] == 2) {
				temp *= 2;
				temp += stack[1][top];
				top--;
			}
			else {
				printf("0\n");
				return 1;
			}
		}
		else if(buf[i] == ']') {
			if(top != -1 && stack[0][top] == 3) {
				temp *= 3;
				temp += stack[1][top];
				top--;
			}
			else {
				printf("0\n");
				return 1;
			}
		}
		if(i == len-1 && top != -1) {
			printf("0\n");
			return 1;
		}
	}
	printf("%d\n", temp);
	return 0;
}