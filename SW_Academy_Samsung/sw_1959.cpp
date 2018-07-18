#include <iostream>

using namespace std;

int get_max(int* larr, int l, int*sarr, int s) {
 	int ret = 0;
    for(int j = 0; j < l-s+1; j++) {
		int sum = 0;
    	for(int i = 0; i < s; i++) sum += larr[j+i]*sarr[i];
        if(!j) ret = sum;
        else ret = max(ret, sum);
    }
    return ret;
}

int main () {
 	int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
     	int a, b; cin>>a>>b;
        int m[a], n[b];
        for(int i = 0; i < a; i++) scanf("%d", &m[i]);
        for(int i = 0; i < b; i++) scanf("%d", &n[i]);
        int r;
        if(a>=b) r = get_max(m, a, n, b);
        else r = get_max(n, b, m, a);
		printf("#%d %d\n", tc, r);
    }
    return 0;
}
