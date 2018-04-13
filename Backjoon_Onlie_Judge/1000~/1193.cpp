#include <stdio.h>

int sum(int n) {
	int ret = 0;
	for(n; n >= 0; n--) ret += n;
	return ret;
}

int main () {
	long long int input;
	scanf(" %lld", &input);
	int i = 1;
	while (input > sum(i)) i++;
	input -= (long long) sum(i-1);
	if(i%2 == 0) printf("%d/%d\n", 1+(input-1), i+1 -input);
	else printf("%d/%d\n", i+1 -input, 1+(input-1));
	return 0;
}
