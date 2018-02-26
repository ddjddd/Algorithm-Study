#include <stdio.h>
#include <stdlib.h>

// function to solve problem
void ps(long long n, long long k) {
	int arr [3][100000];	// arr[0][] primefactor 
							// arr[1] power of prime factor for k
							// arr[2] power of prime factor for n
							
	// indexes
	int i = 0; 			// index for prime factor
	int j = 0;			// index for the number of prime factor
	int m = 0;			// index for searching arr (for n)
	long long l; 	// index for n 
	
	int trial = 0;	// do -while for prim factorization
	
	// prime factorization (소인수분해) 
	for(i = 2; i <= k; i++) {
		if(k%i == 0) { 		// if i can factorize(divide) k
			// for first time, store first(smallest) prime factor into array table		
			if (trial == 0) {
				arr[0][j] = i;
				arr[1][j]++;
				trial++;
			}
			// for last trials, store 'new' prime factor into array
			else if (arr[0][j] != i) {
				j++;			// increasing number of prime factor
				arr[0][j] = i;
				arr[1][j]++;
			}
			// for last trial, same prime factor.
			else {
				arr[1][j]++;	// just increase power
			}
			k /= i;			
			i = 1;				// reset prime factor
		}
	}
	
	// prime factorization for n!
	// start factorization wiht 2, 3, ... , n(==l)
	for (l = 2; l <= n; l++) {
		long long tempL = l;
		for (m = 0; m < j+1; m++) {
			while(tempL%arr[0][m] == 0) {
				arr[2][m]++;		// save facorized power set into array
				tempL /= arr[0][m];
			}
		}
	}
	
	// searching for the power of k
	int min = arr[2][0]/arr[1][0];		// initial value
	// find minimum value of division of prime factor
	for(i = 1; i < j+1; i++) {		
		if(arr[2][i]/arr[1][i] <= min) min = arr[2][i]/arr[1][i];
	}
	
	printf("%d\n", min);		// print value;
	
	//reset array
	for (i = 0; i < j+1; i++) {
		arr[0][i] = arr[1][i] = arr[2][i] = 0;
	}
}

int main(int argc, char** argv) {
	int testCase;
	long long n, k;  // the bound of n, k is too large
	int i;
	int result;
	
	scanf(" %d", &testCase);
	
	for(i = 0; i < testCase; i++) {
		scanf(" %lld %lld", &n, &k);
		ps(n, k);		
	}
	return 0;
}
