#include <iostream>

using namespace std;

int main () {
 	int tC; cin >> tC;
    for(int tc = 1; tc<=tC; tc++) {
     	char buf[31]; scanf("%s", buf);
        int pat = 1;
        while(true) {
            if(buf[0] != buf[pat]) pat++;
            else {
                bool inval = false;
                for(int k = 0; k < 30-pat; k+=pat) {
                    for(int i = k; i < pat; i++) {
                        if(buf[i] != buf[i+pat]) {
                            inval = true;
                            pat++;
                            break;
                        }
                    }
                }
                if(!inval) break;
            }
        }
        printf("#%d %d\n", tc, pat);
    }
    return 0;
}
