#include <stdio.h> 

int main (int argc, char** argv) {
	int N, n3, n5;
	
	scanf("%d", &N);

	for (n3 = 0; n3 < N/3; n3++) {
		if( (N-3*n3)%5 == 0 ) {
			n5 = (N-3*n3)/5;
			printf("%d", n5 + n3);
			return 0;
		}
	}
	if (N%3 == 0) {
		printf("%d", n3);
	}
	else {
		printf("-1");
	}
	return 0;
}

