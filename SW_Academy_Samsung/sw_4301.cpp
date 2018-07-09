#include <iostream>

using namespace std;

int main () {
    int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int cnt = 0;
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < b; j++) {
                if(i/2%2==0 && j/2%2==0) cnt++;
                if(i/2%2 && j/2%2) cnt++;
            }
        }
        printf("#%d %d\n", tc, cnt);
    }
    return 0;
}
