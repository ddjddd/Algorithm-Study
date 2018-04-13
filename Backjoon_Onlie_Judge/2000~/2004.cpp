#include <stdio.h>

#define min(a,b) (a<b?a:b)

typedef long long ll;

ll count2 (int input) 
{
	ll cnt = 0;
	ll i = 2;
	for(i; input/i >= 1; i *= 2) cnt += input/i;	
	return cnt;	
}

ll count5 (int input) 
{
	ll cnt = 0;
	ll i = 5;
	for(i; input/i >= 1; i *= 5) cnt += input/i;	
	return cnt;	
}

int main ()
{
	int n, m;
	scanf("%d %d", &n, &m);
	ll n2 = 0, n5 =0;
	n2 = count2(n);
	n5 = count5(n);
	
	n2 -= count2(m) + count2(n-m);
	n5 -= count5(m) + count5(n-m);
	
	printf("%lld\n", min(n2, n5));
	return 0;
}
