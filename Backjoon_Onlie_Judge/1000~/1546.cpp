#include <stdio.h>

int main (int argc, char** argv) {
	int cases, i=0, M = 0;
	double marks[1000], sum = 0;
	
	scanf("%d", &cases);
	for( ; i<cases; i++ ) {
		scanf("%lf", &marks[i]);
		if ( marks[i] > M ) {
			M = marks[i];
		}
	}

	for ( i = 0; i < cases; i++ ) {
		marks[i] = marks[i]/M * 100.0;
		sum += marks[i];
	}
	
	printf("%.2lf", sum/cases);	
	
	return 0;
}
