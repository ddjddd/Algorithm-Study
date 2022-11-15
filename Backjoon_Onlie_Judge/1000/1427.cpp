#include <iostream>

using namespace std;

int main() {
    int input;
    scanf("%d", &input);
    int count[10] = {
        0,
    };

    if (input == 0) {
        printf("0\n");
        return 0;
    } else {
        while (input != 0) {
            count[input % 10]++;
            input /= 10;
        }
    }
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < count[i]; j++) {
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
