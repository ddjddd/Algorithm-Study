#include <iostream>

#define MAX_STR 1000001

using namespace std;

struct node {
	char c;
	int idx;
};

struct stack {
	//node str[MAX_STR];
	char str[MAX_STR];
	int top = -1;

	stack() {

	}

	void push(char c) {
		str[++top] = c;
	//	str[top].idx = idx;
	}

	char pop() {
		return str[top--];
	}

	char peek() {
		return str[top];
	}

	bool empty() {
		return (top == -1);
	}

	void flush(int n) {
		top -= n;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);

	char buf[MAX_STR], bmb[37];
	cin >> buf >> bmb;
	int bmb_size = -1;

	stack* s = new stack();
	
	for (int i = 0; bmb[i] != NULL; i++) bmb_size++;
	
	char pp = bmb[bmb_size];

	for (int i = 0; buf[i] != NULL; i++) {
		char t = buf[i];

		if (t == pp) {
			bool flag = true;
			if (s->top >= bmb_size-1) {
				for (int j = bmb_size - 1; j >= 0; j--) {
					if ((s->top) - bmb_size + j + 1 >= 0 && s->str[(s->top) - bmb_size + j + 1] != bmb[j]) {
						flag = false;
						break;
					}
				}
			}

			else {
				flag = false;
			}
			
			//cout << "flag " << flag << endl;
			if (flag) s->flush(bmb_size);
			else s->push(t);
		}
		else {
			s->push(t);
		}
		//cout << s->str[s->top] << endl;
	}
	if (s->empty()) {
		cout << "FRULA\n";
	}
	else {
		for (int i = 0; i <= s->top; i++) {
			cout << s->str[i];
		}
		cout << '\n';
	}
	

	return 0;
}
