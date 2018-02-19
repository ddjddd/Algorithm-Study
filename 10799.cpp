#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
	char buf[100001];
	scanf(" %s", buf);
	int size = strlen(buf);
	
	int ret = 0, stack = 0;
	int a = 0, b = 1;
	while (buf[a] == ')' || b<size) {
		if(buf[a] == '(') {
			if(buf[b] == ')') {
				ret += stack;
			 	a++; b++;
			}
			else {
				stack ++;
			}
		}
		else {
			ret++;
			stack--;
		}
		
		a++;
		b++;
	}
	printf("%d\n", ret);
	
	return 0;
}
