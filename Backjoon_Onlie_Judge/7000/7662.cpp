#include <iostream>

using namespace std;

int n, m;

struct node {
    long long val;
    bool pop = false;
};

int listSize = 0;
node list[1000002];

node *newNode(int val) {
    node *ret = &list[listSize];
    ret->val = val;
    ret->pop = false;
    listSize++;
    return ret;
}

node *heap[2][1000001];
int heapSize[2] = {1, 1};

bool comp(int type, node **heap, int a, int b) {
    if (type == 0)
        return heap[a]->val < heap[b]->val;
    else
        return heap[a]->val > heap[b]->val;
}

void push(int num) {
    node *input = newNode(num);

    for (int i = 0; i < 2; i++) {
        node **theap = heap[i];
        int heapsize = heapSize[i];
        theap[heapsize] = input;

        int cur = heapsize;
        while (cur > 1 && comp(i, theap, cur, cur / 2)) {
            node *tmp = theap[cur];
            theap[cur] = theap[cur / 2];
            theap[cur / 2] = tmp;

            cur /= 2;
        }
        heapSize[i] += 1;
    }
}

node *pop(int type) {
    node **theap = heap[type];
    int *heapsize = &(heapSize[type]);

    node *ret = nullptr;

    while (*heapsize > 1) {
        node *tmp = theap[1];
        *heapsize -= 1;
        theap[1] = theap[*heapsize];

        int cur = 1;
        while (cur * 2 < *heapsize) {
            int left = cur * 2, right = cur * 2 + 1;

            int child;
            if (right == *heapsize) {
                child = left;
            } else
                child = comp(type, theap, left, right) ? left : right;

            if (comp(type, theap, cur, child))
                break;

            node *tmp = theap[cur];
            theap[cur] = theap[child];
            theap[child] = tmp;

            cur = child;
        }

        if (!(tmp->pop)) {
            ret = tmp;
            break;
        }
    }

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        heapSize[0] = 1;
        heapSize[1] = 1;
        listSize = 0;

        for (int j = 0; j < m; j++) {

            char c;
            long long tmp;
            cin >> c >> tmp;

            if (c == 'I') {
                push(tmp);
            }

            else if (c == 'D') {
                node *ret;
                int type;

                if (tmp == -1)
                    type = 0;
                else if (tmp == 1)
                    type = 1;

                ret = pop(type);

                if (ret) {
                    ret->pop = true;
                }
            }
        }

        node *print = nullptr;
        print = pop(1);
        if (!print || print->pop) {
            cout << "EMPTY\n";
        } else {
            cout << print->val << ' ';
            push(print->val);
            cout << pop(0)->val << endl;
        }
    }

    return 0;
}
