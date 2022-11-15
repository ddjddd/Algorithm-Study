#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int size;
    scanf("%d", &size);

    int arr[100000] = {
        0,
    };
    int dp[100000] = {
        0,
    };

    for (int i = 0; i < size; i++) {
        scanf(" %d", &arr[i]);
    }
    int ret = arr[0];
    dp[0] = arr[0];

    for (int i = 1; i < size; i++) {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
    }

    for (int i = 0; i < size - 1; i++) {
        ret = max(ret, dp[i + 1]);
    }

    printf("%d\n", ret);
    return 0;
}
