#include <iostream>

using namespace std;

int checkPrime(int input) {
    int i = 2;
    if (input <= 1) return 0;
    for (i; i < input; i++) {
        if (input % i == 0) return 0;
    }
    return 1;
}

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    int sum = 0, min = 0, first = 0;
    int i = 0;
    for (i = start; i <= end; i++) {
        if (checkPrime(i) == 1) {
            sum += i;
            if (first == 0) {
                min = i;
                first++;
            }
        }
    }
    if (sum == 0) {
        printf("-1\n");
    }
    else printf("%d\n%d\n", sum, min);

    return 0;
}