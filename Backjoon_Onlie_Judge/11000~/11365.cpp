#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main () {
	char buf[501];
	
	gets(buf);
	while(strcmp(buf, "END" ) != 0) {
		int len = strlen(buf);
		for(int i = len-1; i >= 0; i--) printf("%c", buf[i]);
		printf("\n");
		gets(buf);
	}
	
	return 0;
}
