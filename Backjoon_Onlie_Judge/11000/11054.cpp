#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int arr[1001], size;
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int icr[1001], dcr[1001];
    icr[0] = 0;
    dcr[size - 1] = 0;

    for (int i = 1; i < size; i++) {
        int max = -1;
        for (int j = 0; j < i; j++) {
            if (icr[j] > max && arr[j] < arr[i]) {
                max = icr[j];
            }
        }
        icr[i] = max + 1;
    }

    for (int i = size - 2; i >= 0; i--) {
        int min = -1;
        for (int j = size - 1; j > i; j--) {
            if (dcr[j] > min && arr[j] < arr[i]) {
                min = dcr[j];
            }
        }
        dcr[i] = min + 1;
    }
    int ret = -1;
    for (int i = 0; i < size; i++) {
        icr[i] += dcr[i];
        ret = max(ret, icr[i]);
    }
    printf("%d\n", ret + 1);

    return 0;
}
