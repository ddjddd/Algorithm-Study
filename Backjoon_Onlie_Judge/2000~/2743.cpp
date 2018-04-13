#include <stdio.h>
#include <string.h>

int main () {
	char buf[101];
	scanf(" %s", buf);
	int i = strlen(buf);
	printf("%d\n", i);
	return 0;
}
