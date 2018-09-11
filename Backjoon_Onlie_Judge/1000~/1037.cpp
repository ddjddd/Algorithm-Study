#include <iostream>
#define MAX(a, b) ((a)>(b)?(a):(b))
#define MIN(a, b) ((a)>(b)?(b):(a))

using namespace std;

int main () {
	int num;
	cin >> num;
	int a= 1000001, b = 0, ret;
	for(int i = 0; i < num; i++) {
		int t; cin >> t;
		a = MIN(a, t);
		b = MAX(b, t);
	}
	
	cout << a*b << endl;
	return 0;
}
