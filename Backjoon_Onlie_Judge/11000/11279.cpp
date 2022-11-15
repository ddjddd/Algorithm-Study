#include <iostream>

using namespace std;

const int MAX_SIZE = 100001;

int heap[MAX_SIZE] = { 0 };
int heapSize = 0;

void push(int input) {
    heap[++heapSize] = input;

    int cur = heapSize;
    while (cur > 1 && heap[cur] > heap[cur / 2]) {
        int tmp = heap[cur / 2];
        heap[cur / 2] = heap[cur];
        heap[cur] = tmp;

        cur /= 2;
    }
}

int pop() {
    int ret = heap[1];
    heap[1] = heap[heapSize--];

    int cur = 1;
    while (cur * 2 <= heapSize) {
        int child;
        if (cur * 2 + 1 > heapSize)
            child = cur * 2;
        else if (heap[cur * 2] >= heap[cur * 2 + 1])
            child = cur * 2;
        else
            child = cur * 2 + 1;

        if (heap[cur] > heap[child])
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

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp, ans;
        cin >> tmp;
        if (tmp == 0) {
            if (heapSize == 0)
                ans = 0;
            else
                ans = pop();
            cout << ans << '\n';
        } else {
            push(tmp);
        }
        // for(int k = 1; k <= heapSize; k++) {
        //     cout << heap[k] << ' ';
        // }
        // cout << endl;
    }

    return 0;
}