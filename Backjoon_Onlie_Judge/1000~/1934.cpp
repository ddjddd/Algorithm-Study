#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int a, int b) {
	if(a%b == 0) return b;
	else return gcd(b, a%b);
}

int main () {
	int cases, a, b;
	cin >> cases;
	for(int i = 0; i < cases; i++) {
		cin >> a >> b;
		int g = a > b ? gcd(a,b) : gcd(b, a);
		cout << a*b/g << endl;
	}
	
	return 0;
}
