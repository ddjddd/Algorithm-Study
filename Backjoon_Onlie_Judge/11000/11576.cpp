#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

void func(int input, int base) {
    if (input != 0) {
        func(input / base, base);
        printf("%d ", input % base);
    }
}

int main() {
    int baseA, baseB, size;
    scanf("%d %d %d", &baseA, &baseB, &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int ret = 0;
    for (int i = size - 1, t = 1; i >= 0; i--, t *= baseA) {
        ret += arr[i] * t;
    }

    func(ret, baseB);
    return 0;
}
