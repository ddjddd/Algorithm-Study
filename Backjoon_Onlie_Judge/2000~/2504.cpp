#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
#include <utility>

using namespace std;

typedef pair<char, int> node;

int main () {
	char buf[31];
	stack <node> s;
	scanf(" %s", buf);
	int len = strlen(buf);
	
	
	for(int i = 0; i < len; i++) {
		bool tag = false;
		if(buf[i] == '(') {
			s.push(make_pair('(', 0));
		}
		else if (buf[i] == ')') {
			if (!s.empty()) {
				if (s.top().first == '(') s.pop();
				else {
					tag = true;
				}
			}
			else {
				tag = true;
			}
		}
		else if (buf[i] == '[') {
			s.push(make_pair('[', 0));
		}
		else if (buf[i] == ']') {
			if (!s.empty()) {
				if (s.top().first == '[') s.pop();
				else {
					tag = true;
				}
			}
			else {
				tag = true;
			}
		}
		if (tag) {
			cout << 0 << endl;
			return 0;
		}
	}
	if (!s.empty()) {
		cout << 0 << endl;
		return 0;
	}
	
	
	for(int i = 0; i < len; i++) {
		if(buf[i] == '(') {
			s.push(make_pair('(', 0));
		}
		else if (buf[i] == ')') {
			if (s.top().first == '(') {
				s.pop();
				s.push(make_pair('*', 2));
			}
			else if (s.top().first == '*') {
				int tmp = 0;
				do {
					tmp += s.top().second;
					s.pop();
				} while (s.top().first != '(');
				s.pop();
				s.push(make_pair('*', tmp*2));
			}
		}
		else if (buf[i] == '[') {
			s.push(make_pair('[', 0));
		}
		else if (buf[i] == ']') {
			if (s.top().first == '[') {
				s.pop();
				s.push(make_pair('*', 3));
			}
			else if (s.top().first == '*') {
				int tmp = 0;
				do {
					tmp += s.top().second;
					s.pop();
				} while (s.top().first != '[');
				s.pop();
				s.push(make_pair('*', tmp*3));
			}
		}
	}
	
	int ret = 0;
	while (!s.empty()) {
		ret += s.top().second;
		s.pop();
	}
	cout << ret;
	
//	if (right == false) cout << 0 << endl;
//	else cout << ret;
	
	
	
	return 0;
}
