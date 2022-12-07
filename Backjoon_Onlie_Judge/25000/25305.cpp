#include <iostream>

using namespace std;

void merge(int *data, int *sorted, int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    int k = start;

    while (i <= mid && j <= end) {
        if (data[i] >= data[j]) {
            sorted[k] = data[i];
            i++;
        } else {
            sorted[k] = data[j];
            j++;
        }
        k++;
    }
    if (i > mid) {
        for (int t = j; t <= end; t++) {
            sorted[k] = data[t];
            k++;
        }
    } else {
        for (int t = i; t <= mid; t++) {
            sorted[k] = data[t];
            k++;
        }
    }

    for (int t = start; t <= end; t++) {
        data[t] = sorted[t];
    }
}

void mergeSort(int *data, int *sorted, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(data, sorted, start, mid);
        mergeSort(data, sorted, mid + 1, end);
        merge(data, sorted, start, mid, end);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, c;
    cin >> n >> c;

    int arr[n], buf[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, buf, 0, n - 1);

    cout << arr[c - 1] << endl;

    return 0;
}