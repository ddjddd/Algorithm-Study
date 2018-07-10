#include <iostream>

using namespace std;

int main () {
 	int tC;
    cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
     	int ma = -1, mi =100001;
        double sum = 0.0;
        int mac = 0, mic = 0;
        for(int i = 0; i < 10; i++) {
         	int  t; cin >> t;
            if(ma < t) { ma = t; mac = 1;}
            else if(ma == t) {mac++;}
            if(mi > t) {mi = t; mic = 1;}
            else if(mi == t){mic++;}
            sum += (double)t;
        }
        double avg;
        if(mi < ma) {
            if(mic + mac < 10) avg = (sum-mi*mic-ma*mac)/(double)(10-mic-mac);
            else avg = 0;
        }
        else avg = 0;
        printf("#%d %d\n", tc, (int)(avg+0.5));
    }
    return 0;
}
