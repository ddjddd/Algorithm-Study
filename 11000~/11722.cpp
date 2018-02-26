#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	int size;
	scanf("%d", &size);
	
	int arr[size];
	int dp[size];
	
	for(int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
		dp[i] = 0;
	}
	
	dp[size-1] = 1;
	for(int i = size-2; i >= 0; i--) {
		int t = 0;
		for(int j = size-1; j > i; j--) {
			if(arr[j] < arr[i])t = max(t, dp[j]);
		}
		dp[i] = t+1;
	}
	int t = 0;
	for(int i = 0; i < size; i++) {
		t = max(t, dp[i]);
	}
	printf("%d\n", t);
	return 0;
}
