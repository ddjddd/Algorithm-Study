#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main () {
	string str;
	int inst;
	cin >> str >> inst;
	int index = str.length();
	
	for(int i = 0; i < inst; i++) {
		char c;
		scanf(" %c", &c);
		
		if(c == 'L') {
			index--;
			if(index < 0) index = 0;
		}
		else if(c == 'D') {
			index++;
			if(index > str.length()) index = str.length();
		}
		else if(c == 'B') {
			index--;
			if(index >= 0) str.erase(index, 1);
			if(index < 0) index = 0;
		}
		else if(c == 'P') {
			string t;
			cin >> t;
			str.insert(index, t);
			index++;
		}
	}

	cout << str << endl;
	return 0;
}
