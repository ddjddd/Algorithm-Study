#include <iostream>
#include <algorithm>

using namespace std;

int main () {
	int max;
	scanf("%d", &max);
	int *arr = new int[max];
	for(int i = 0; i < max; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr+max);
	int sum = 0;
	for(int i = 0; i < max; i++) {
		sum += arr[i];
	}
	double mean = (double)sum / max;
	int aMean;
	if( mean > 0 )
	{
		if( mean - (int)mean < 0.5 )
			aMean = (int)mean;
		else //mean - (int)mean >= 0.5
			aMean = (int)mean + 1;
	}
	else if( mean < 0 )
	{
		if( mean - (int)mean > -0.5) // -0.1, -0.2, -0.3, -0.4
			aMean = (int)mean;
		else // -0.5, -0.6, -0.7, -0.8, -0.9
			aMean = (int)mean - 1;
	}
	
	printf("%d\n%d\n", aMean, arr[max/2]);
	int *count = new int[8001];
	for(int i = 0; i < 8001; i++) count[i] = 0;
	for(int i = 0; i < max; i++) {
		count[arr[i]+4000]++;
	}
	int ret = 0, trial = 0;
	for(int i = 1; i < 8001; i++) {
		if (count[i] > count[ret]) {
			ret = i;
			trial = 0;
		}
		else if (count[i] == count[ret] && trial == 0) {
			ret = i; trial++;
		} 
	}
	printf("%d\n%d\n", ret-4000, arr[max-1] - arr[0]);
	
	return 0;
}
