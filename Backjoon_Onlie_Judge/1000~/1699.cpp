#include <iostream>
#include <cstdio>

#define size 100000

using namespace std;

int main () {
	int input;
	cin >> input;
	int dp[size] = {0, };

	int coins, coin[1000];
	for(int i = 1; i*i <= size; i++) {
		coin[i] = i*i;
		coins = i;
	}


	for(int i = 1; i < size; i++) {
		int k = size;
		for(int j = 1; j <= coins; j++) {
			if(i >= coin[j]) {
				dp[i] = min(dp[i-1] + 1, dp[i-coin[j]] + 1);
				if(k > dp[i]) k = dp[i];
			}
		}
		dp[i] = k;
	}

	cout << dp[input] << endl;

	return 0;
}
