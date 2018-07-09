#include <iostream>

using namespace std;

bool full(bool* arr) {
    int cnt = 0;
    for(int i = 0; i < 10; i++) if(arr[i]) cnt++;
    if(cnt == 10) return true;
    else return false;
}

int main () {
    int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
        int n; cin >> n;
        bool arr[10];
        for(int i = 0; i < 10; i++) arr[i] = false;
        int i = 1;
        while (!full(arr)) {
            int tmp = n * i;
            while(tmp > 0) {
                arr[tmp%10] = true;
                tmp/=10;
            }
            i++;
        }

        printf("#%d %d\n", tc, --i*n);
    }

    return 0;
}
