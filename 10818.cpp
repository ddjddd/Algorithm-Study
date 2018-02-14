#include <stdio.h>

int main(){
	int cases, t, min = 1000001, max = -1000001;
	scanf("%d", &cases);
	for(int i = 0; i < cases; i++) {
		scanf("%d", &t);
		if(t < min) min = t;
		if(t > max) max = t;
	}
	printf("%d %d\n", min, max);
	return 0;
}