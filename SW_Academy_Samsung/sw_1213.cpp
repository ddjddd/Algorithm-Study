#include <iostream>
#include <cstring>

using namespace std;

int main () {
	// freopen("input.txt", "r", stdin);
	int tC; tC = 10;
	for(int tc = 1; tc <= tC; tc++) {
		int dummy; cin >> dummy;
		char pattern[11];
		char str[1001];
		scanf("%s", pattern);
		scanf("%s", str);
		
		int len = strlen(str);
		int plen = strlen(pattern);
		int count = 0;
		for(int i = 0; i < len-plen+1; i++) {
			bool check = true;
			for(int j = 0; j < plen; j++) {
				if(str[i+j] != pattern[j]) {
					check = false;
					break;
				}
			}
			if(check) {
				i += plen;
				count++;
			}
		}
		printf("#%d %d\n", tc, count);
	}
	return 0;
}
