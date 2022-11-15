#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int sum = 0, mi = 0;
    int arr[101];
    for (int i = 1; i < 101; i++) {
        arr[i] = i * i;
    }

    for (int i = 1; i < 101; i++) {
        if (arr[i] >= m && arr[i] <= n) {
            sum += arr[i];
            if (mi == 0)
                mi = arr[i];
        }
    }

    if (sum == 0) {
        printf("-1\n");
        return 0;
    } else {
        printf("%d\n%d\n", sum, mi);
    }

    return 0;
}
