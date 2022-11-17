#include <iostream>

#define ABS(x) ((x) > 0 ? (x) : -(x))

using namespace std;

int n;
int heap[100000];
int heapsize = 1;

bool comp(int a, int b) {
    if (ABS(heap[a]) != ABS(heap[b]))
        return ABS(heap[a]) < ABS(heap[b]);
    else
        return heap[a] < heap[b];
}

void enqueue(int value) {
    heap[heapsize] = value;
    int cur = heapsize;
    while (cur > 1 && comp(cur, cur / 2)) {
        int tmp = heap[cur / 2];
        heap[cur / 2] = heap[cur];
        heap[cur] = tmp;
        cur /= 2;
    }
    heapsize++;
};

int dequeue() {
    if (heapsize <= 1)
        return 0;

    int ret = heap[1];
    heapsize--;
    heap[1] = heap[heapsize];

    int cur = 1;
    while (cur * 2 < heapsize) {
        int child;
        if (cur * 2 + 1 == heapsize) {
            child = cur * 2;
        } else {
            child = comp(cur * 2, cur * 2 + 1) ? cur * 2 : cur * 2 + 1;
        }

        if (comp(cur, child))
            break;

        int tmp = heap[cur];
        heap[cur] = heap[child];
        heap[child] = tmp;

        cur = child;
    }

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp) {
            enqueue(tmp);
        } else {
            cout << dequeue() << '\n';
        }
    }

    return 0;
}