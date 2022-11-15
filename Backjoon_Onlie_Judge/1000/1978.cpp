#include <iostream>

bool primeNum(int a) {
    if (a == 1)
        return false;
    for (int i = 2; i < a; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main() {
    int max;
    int t, cnt = 0;
    scanf("%d", &max);
    for (int i = 0; i < max; i++) {
        scanf("%d", &t);
        if (primeNum(t) == true)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}
