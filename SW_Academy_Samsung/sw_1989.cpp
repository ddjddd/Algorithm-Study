#include <iostream>
#include <cstring>

using namespace std;

int main () {
 	int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
     	bool valid = true;
        char buf[11]; scanf("%s", buf);
        int len = strlen(buf);
       	int sublen = len/2;
        for(int i = 0; i < sublen; i++) {
            if(buf[i] != buf[len-1-i]) {valid = false; break;}
        }
    	printf("#%d %d\n", tc, valid);    
    }
    return 0;
}
