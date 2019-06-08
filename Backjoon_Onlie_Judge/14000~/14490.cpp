#include <cstdio>

using namespace std;

int gcd (int a, int b) {
	if (a % b == 0)
        return b;
    else
        return gcd(b, a%b);
}

int main () {
	int a, b;
	scanf("%d:%d", &a, &b);
	
	int g = a > b ? gcd(a, b) : gcd(b, a);
	
	
	printf("%d:%d\n", a/g, b/g);
	return 0;
}
