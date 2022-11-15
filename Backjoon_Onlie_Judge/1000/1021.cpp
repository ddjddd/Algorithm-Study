#include <iostream>

using namespace std;

struct node {
    int data;
    node *next;

    node() {
        data = 0;
        next = NULL;
    }
    node(int x) {
        data = x;
        next = NULL;
    }
};

struct queue {
    int size;
    node *front, *rear;

    queue() {
        front = new node;
        rear = NULL;
        size = 0;
    }

    void push(int x) {
        node *nNode = new node(x);

        if (!size) {
            front->next = nNode;
        } else {
            rear->next = nNode;
        }
        rear = nNode;
        size++;
    }

    int pop() {
        node *dnode = front->next;
        int ret = dnode->data;
        front->next = dnode->next;
        size--;
        delete dnode;
        return ret;
    }

    int peek() {
        return front->next->data;
    }

    void print() {
        for (node *pt = front->next; pt != NULL; pt = pt->next) {
            cout << pt->data << ' ';
        }
        cout << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);

    int n, m, ans = 0;
    cin >> n >> m;
    queue q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        int cnt = 0;
        while (q.peek() != tmp) {
            q.push(q.pop());
            cnt++;
        }
        q.pop();
        if (cnt != 0 && cnt > q.size - cnt) {
            cnt = q.size - cnt;
            cnt++;
        }
        ans += cnt;
    }

    cout << ans << '\n';

    return 0;
}
