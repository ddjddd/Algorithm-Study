#include <iostream>

using namespace std;

int main () {
	int n, k;
	cin >> n >> k;
	int* coin = new int[n];
	for(int i = 0; i < n; i++) cin >> coin[i];
	int* dp = new int[k+1];
	
	for(int i = 0; i <= k; i++){
		dp[i] = 0;
	}
	dp[0] = 1;
	for(int j = 0; j < n; j++) {
		int c = coin[j];
		for(int i = 1; i <= k; i++){
			if(i >= c) {
				dp[i] += dp[i-c];
			}
		}
	}
	
	cout << dp[k] << endl;
	
	return 0;
}
