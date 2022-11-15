#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char buf[10024];
    int d;
    scanf("%s %d", buf, &d);

    int len = strlen(buf);
    long long ret = 0;
    int t = 1;
    for (int i = len - 1; i >= 0; i--, t *= d) {
        int tempDigit;
        if (buf[i] >= 'A' && buf[i] <= 'Z')
            tempDigit = buf[i] - 'A' + 10;
        else
            tempDigit = buf[i] - '0';
        ret += tempDigit * t;
    }
    printf("%lld\n", ret);
    return 0;
}
