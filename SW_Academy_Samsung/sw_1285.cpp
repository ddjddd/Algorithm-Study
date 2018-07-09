#include <iostream>

using namespace std;

int main() {
    int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
        int ret = 10000000, cnt= 0;
        int num; cin >> num;
        for(int i = 0; i < num; i++) {
            int tmp;
            scanf("%d", &tmp);
            if(tmp < 0) tmp *= -1;
            if(tmp < ret) {
                cnt = 1;
                ret = tmp;
            }
            else if(tmp == ret) {
                cnt ++;
            }
        }    
    
        printf("#%d %d %d\n", tc, ret, cnt);
    }
    return 0;
}
