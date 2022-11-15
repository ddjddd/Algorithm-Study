#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int len, k;
    scanf("%d %d", &len, &k);
    int *arr = (int *)malloc(sizeof(int) * len);
    int i = 0;
    for (i; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + len);

    printf("%d\n", arr[k - 1]);

    return 0;
}
