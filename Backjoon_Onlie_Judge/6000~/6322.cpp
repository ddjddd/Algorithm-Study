#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, tc = 1;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if (a == 0) return 0;
        printf("Triangle #%d\n", tc);
        double ans = 0;
        char ret;
        if (a == -1) {
            ret = 'a';
            ans = sqrt(c * c - b * b);
        }
        else if (b == -1) {
            ret = 'b';
            ans = sqrt(c * c - a * a);
        }
        else {
            ret = 'c';
            ans = sqrt(a * a + b * b);
        }

        if (!isnan(ans) && ans - 0.0f > 0.00001) {
            printf("%c = %.3f\n\n", ret, ans);
        }
        else {
            printf("Impossible.\n\n");
        }
        tc++;
    }
    return 0;
}
