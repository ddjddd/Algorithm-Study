#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	int size;
	scanf("%d", &size);
	
	int arr[size];
	int dp[size*3];
	
	for(int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
		dp[3*i] = dp[3*i + 1] = dp[3*i +2] = 0;
	}
	
	int ret;
	if(size == 1) {
		ret = arr[0];
	}
	else if(size == 2) {
		ret = arr[0] + arr[1];
	}
	else if(size == 3) {
		ret = arr[0] + max(arr[1], arr[2]);
	}
	else {
		dp[0] = arr[0];
		dp[1] = arr[0] + arr[1];
		dp[2] = arr[1];
		
		int j = 0;
		for(j = 1; j < size-2; j++) {
			int k = 3*j, b = 3*(j-1);
            dp[k] = max(dp[b+1],dp[b+2]);
			dp[k+1] = dp[b+2] + arr[j+1];
			dp[k+2] = dp[b] + arr[j+1];
        }
    	j--; j *= 3;
		int ret = max(dp[j], dp[j+2]) + arr[size-1];
		printf("%d\n", ret);
	}
	

	return 0;
}
