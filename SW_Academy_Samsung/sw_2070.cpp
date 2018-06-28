#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	for(int t = 0; t < c; t++) {
		int a, b;
		cin >> a >> b;
		if(a < b) printf("#%d <\n", t+1);
		else if(a > b) printf("#%d >\n", t+1);
		else printf("#%d =\n", t+1);
	}
	return 0;
}
