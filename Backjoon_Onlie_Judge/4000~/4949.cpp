#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main () {
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(true) {
		string str;
		stack<char> s;
		getline(cin, str);
		bool flag = true;
		
		if(str.length() == 1 && str[0] == '.')  {
			return 0;
		}
		
		for(int i = 0; i < str.length(); ++i) {
			if(str[i] == '(') {
				s.push('(');
			}
			
			else if(str[i] == '[') {
				s.push('[');
			}
			
			else if(str[i] == ')') {
				if(!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					flag = false;
					break;
				}
			}
			
			else if(str[i] == ']') {
				if(!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					flag = false;
					break;
				}
			}
		}
		
		
		if(flag && s.empty()) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
