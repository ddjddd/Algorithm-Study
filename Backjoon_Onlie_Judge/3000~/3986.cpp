#include <iostream>

using namespace std;

struct stack {
	char st[100001];
	int top = -1;

	stack(){
	}

	void push(char c) {
		st[++top] = c;
	}

	char pop() {
		return st[top--];
	}

	char peek() {
		return st[top];
	}

	bool empty() {
		return (top == -1);
	}
};

bool check(char* str) {
	stack *s = new stack();
	char c;
	while (c = *str++) {
		if (s->empty() || s->peek() != c) s->push(c);
		else if (s->peek() == c) s->pop();
	}
	if (!(s->empty())) return false;
	else return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);

	int len, ans = 0; cin >> len;
	char buf[100001];
	
	for (int i = 0; i < len; i++) {
		cin >> buf;
		if (check(buf))ans++;
	}
	cout << ans << '\n';
	return 0;
}
