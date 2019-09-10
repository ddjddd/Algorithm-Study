#include <iostream>

using namespace std;

struct stack {
	int st[500001];
	int top = -1;

	stack(){
	}

	void push(int c) {
		st[++top] = c;
	}

	int pop() {
		return st[top--];
	}

	int peek() {
		return st[top];
	}

	bool empty() {
		return (top == -1);
	}
}*st[7];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);

	int n, p, ans = 0; cin >> n >> p;
	for (int i = 1; i < 7; i++) st[i] = new stack();

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (st[a]->empty()) {
			st[a]->push(b);
			ans++;
		}
		else {
			if (st[a]->peek() > b) {
				while (st[a]->peek() > b) {
					st[a]->pop();
					ans++;
				}
			}
			if (st[a]->peek() != b) {
				st[a]->push(b);
				ans++;
			}
		}
	}

	cout << ans << '\n';
	return 0;
}
