#include <iostream>

using namespace std;

int main () {
 	int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
    	int ret = 0, num; cin >> num;
        for(int i = 1; i <= num; i++) {
            if(i%2) ret += i;
            else ret -= i;
        }
        printf("#%d %d\n", tc, ret);
    }
    return 0;
}
