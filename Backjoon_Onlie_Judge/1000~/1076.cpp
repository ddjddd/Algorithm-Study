#include <iostream>

using namespace std;

string arr[10] = {
	"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"
};

int getValue(string s) {
	for(int i = 0; i < 10; i++) {
		if(!s.compare(arr[i])) return i;
	}
	return -1;
}

int main () {
	string s; int ret;
	cin >> s; ret = getValue(s) * 10;
	cin >> s; ret += getValue(s);
	cin >> s; int len = getValue(s);
	cout << ret;
	if(ret != 0) {
		for(int i = 0; i < len; i++) {
			cout << '0';
		}
		cout << '\n';
	}

	return 0;
}
