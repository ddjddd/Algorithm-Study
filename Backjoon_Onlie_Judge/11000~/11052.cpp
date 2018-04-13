#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	int size;
	cin >> size;
	int arr[size+1];
	int dp[size+1] = {0, };
	
	
	for(int i = 1; i <= size; i++) {
		cin >> arr[i];
	}
	
	dp[1] = arr[1];
	for(int i = 2; i <= size; i++) {
		int t = arr[i];
		for(int j = 1; j <= i/2; j++) {
			t = max(t, dp[i-j] + dp[j]);
		}
		dp[i] = t;
	}
	cout << dp[size] << '\n';
	
	return 0;
}
