#include <iostream>

using namespace std;

int main () {
    int tC; cin>>tC;
    int dp[10][10];
    dp[0][0] = 1;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j <= i; j++) {
            if (j == 0 || j == i) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }       
    for(int tc = 1; tc<=tC; tc++) {
        int n; cin >> n;
        printf("#%d\n", tc);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                printf("%d ", dp[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
