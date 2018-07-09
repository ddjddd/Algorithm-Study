#include <iostream>

using namespace std;

int main () {
    int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
        int num; cin >> num;
        int v = 0, d = 0;
        for(int i = 0; i < num; i++) {
            int com; cin >> com;
            int ac = 0; if(com) cin >> ac;
            if(com == 1) v += ac;
            if(com == 2) v -= ac;
            if(v < 0) v = 0;
            d += v;
        }
        printf("#%d %d\n", tc, d);
    }
    return 0;
}
