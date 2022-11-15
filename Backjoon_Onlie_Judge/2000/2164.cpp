#include <cstdio>

using namespace std;

int main() {
    int n, ret = 0;
    scanf("%d", &n);

    int i = 1;

    while ((i << 1) <= n) {
        i = i << 1;
    }

    if (i == n)
        ret = i;
    else
        ret = (n - i) << 1;
    printf("%d\n", ret);

    return 0;
}
