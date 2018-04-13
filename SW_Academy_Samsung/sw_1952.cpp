#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	int cases;
	cin >> cases;
	for(int c = 0; c < cases; c++) {
		int coin[4];
		cin >> coin[0] >> coin[1] >> coin[2] >> coin[3];
		
		int dp[12];
		for(int i = 0; i < 12; i++) {
			scanf("%d", &dp[i]);
			dp[i] = min(dp[i]*coin[0], coin[1]);
		}
		int dp2[12];
		dp2[0] = min(dp[0], coin[2]);
		dp2[1] = min(dp[0]+dp[1], coin[2]);
		dp2[2] = min(dp[0]+dp[1]+dp[2], coin[2]);
		
		for(int i = 3; i < 12; i++) {
			dp2[i] = min(dp2[i-1]+dp[i], dp2[i-3]+coin[2]);
		}
				
		int ret = min(dp2[11], coin[3]);
		printf("#%d %d\n", c+1, ret);
	}	
	
	return 0;
}
