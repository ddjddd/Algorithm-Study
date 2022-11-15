#include <iostream>

using namespace std;

char buf[100001];
int inst;

struct node {
    char c;
    node *prev, *next;

    node() {
        prev = NULL;
        next = NULL;
    }

    node(char in) {
        c = in;
        prev = NULL;
        next = NULL;
    }
};

struct list {
    int len;
    node *head, *tail, *cursor;

    list() {
        len = 0;
        head = new node();
        tail = new node();
        cursor = tail;
    }

    void push(char c) {
        node *nNode = new node(c);
        if (len == 0) {
            head->next = nNode;
            nNode->prev = head;
            nNode->next = tail;
            tail->prev = nNode;
        } else {
            node *end = tail->prev;
            end->next = nNode;
            nNode->prev = end;
            nNode->next = tail;
            tail->prev = nNode;
        }
        cursor = nNode;
        len++;
    }

    void cmd_left() {
        if (cursor != head) {
            cursor = cursor->prev;
        }
    }

    void cmd_right() {
        if (cursor != tail->prev) {
            cursor = cursor->next;
        }
    }

    void cmd_push(char c) {
        node *nNode = new node(c);
        node *nn = cursor->next;
        cursor->next = nNode;
        nNode->prev = cursor;
        nNode->next = nn;
        nn->prev = nNode;

        cursor = nNode;

        len++;
    }

    void cmd_delete() {
        if (cursor != head && cursor != tail) {
            node *t1 = cursor->prev;
            node *t2 = cursor->next;
            delete cursor;

            cursor = t1;

            t1->next = t2;
            t2->prev = t1;
            len--;
        }
    }

    void print() {
        node *ptr = head->next;
        for (ptr; ptr != tail; ptr = ptr->next) {
            cout << ptr->c;
        }
        cout << '\n';
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    cin >> buf >> inst;

    int len = 0;
    list *l = new list();

    for (int i = 0; buf[i] != '\0'; i++) {
        l->push(buf[i]);
    }

    for (int i = 0; i < inst; i++) {
        char c;
        cin >> c;
        if (c == 'L') {
            l->cmd_left();
        } else if (c == 'D') {
            l->cmd_right();
        } else if (c == 'B') {
            l->cmd_delete();
        } else if (c == 'P') {
            char t;
            cin >> t;
            l->cmd_push(t);
        }
    }
    l->print();

    return 0;
}
