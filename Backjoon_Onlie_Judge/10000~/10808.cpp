#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main () {
	
	char buf[101];
	while(fgets(buf, 102, stdin)) {
		if(feof(stdin)) break;
		int l = strlen(buf);
		int A = 0, a = 0, n = 0, s = 0;
		for(int i = 0; i < l; i++) {
			if(buf[i] >= 'a' && buf[i] <= 'z') {
				a++;
			}
			else if(buf[i] >= 'A' && buf[i] <= 'Z') {
				A++;
			}
			else if(buf[i] >= '0' && buf[i] <= '9') {
				n++;
			}
			else if(buf[i] == ' ') {
				s++;
			}
		}
		printf("%d %d %d %d\n", a, A, n, s);
	}
	
	return 0;
}
