#include <iostream>

using namespace std;

int main() {
    int max, tmp;
    cin >> max;
    int *arr = new int[10001];
    for (int i = 1; i < 10001; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < max; i++) {
        scanf("%d", &tmp);
        arr[tmp]++;
    }
    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < arr[i]; j++)
            printf("%d\n", i);
    }
    return 0;
}
