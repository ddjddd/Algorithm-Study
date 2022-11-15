#include <iostream>

using namespace std;

int *arr;

void merge(int start, int end, int mid) {
    int l, r, t = 0;
    l = start, r = mid + 1;
    int size = end - start + 1;
    int *temp = new int[size];
    while (l <= mid && r <= end && l < r) {
        if (arr[l] < arr[r]) {
            temp[t] = arr[l];
            l++;
            t++;
        } else {
            temp[t] = arr[r];
            r++;
            t++;
        }
    }
    for (int i = l; i <= mid; i++, t++) {
        temp[t] = arr[i];
    }
    for (int i = r; i <= end; i++, t++) {
        temp[t] = arr[i];
    }
    for (int i = start, t = 0; i <= end; i++, t++) {
        arr[i] = temp[t];
    }
}

void mergeSort(int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(start, mid);
        mergeSort(mid + 1, end);
        merge(start, end, mid);
    }
}

int main() {
    int max;
    cin >> max;
    arr = new int[max];
    for (int i = 0; i < max; i++) {
        scanf("%d", &arr[i]);
    }
    mergeSort(0, max - 1);

    for (int i = 0; i < max; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
