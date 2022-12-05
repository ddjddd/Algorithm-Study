#include <iostream>

using namespace std;

struct node {
    int val, idx;
};

void merge(node *data, node *sorted, int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    int k = start;

    while (i <= mid && j <= end) {
        if (data[i].val <= data[j].val) {
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

void mergeSort(node *data, node *sorted, int start, int end) {
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

    // freopen("jh.in", "rt", stdin);

    int n;
    cin >> n;

    node arr[n], sorted[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i].val;
        arr[i].idx = i;
    }
    mergeSort(arr, sorted, 0, n - 1);

    node ans[n];
    for (int i = 0; i < n; i++) {
        sorted[arr[i].idx].val = i;
    }
    for (int i = 0; i < n; i++) {
        cout << sorted[i].val << ' ';
    }
    cout << endl;

    return 0;
}