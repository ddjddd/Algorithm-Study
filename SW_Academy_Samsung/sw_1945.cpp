#include <iostream>

using namespace std;

int main () {
 	int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
     	int t; cin >> t;
        int arr[5] = {0, };
        while(t > 1) {
            if(t%2 == 0) {
                arr[0]++;
                t/=2;
            }
            else if(t%3 == 0) {
                arr[1]++;
                t/=3;
            }
            else if(t%5 == 0) {
                arr[2]++;
                t/=5;
            }
            else if(t%7 == 0) {
                arr[3]++;
                t/=7;
            }
            else if(t%11 == 0) {
                arr[4]++;
                t/=11;
            }
        }
        printf("#%d %d %d %d %d %d\n", tc, arr[0], arr[1], arr[2], arr[3], arr[4]);
        
    }
    return 0;
}
