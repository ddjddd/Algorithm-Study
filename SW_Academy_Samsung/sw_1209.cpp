#include <iostream>

using namespace std;

int main () {
 	int tC = 10;
    for(int tc = 1; tc <= tC; tc++) {
        int dummy; cin >> dummy;
        int arr[100][100];
        for(int i = 0; i < 100; i++) for(int j = 0; j < 100; j++) scanf("%d", &arr[i][j]);
        
        int ma = 0;
        for(int i = 0; i < 100; i++) {
            int sum = 0;
            for(int j = 0; j < 100; j++) {
                sum += arr[i][j];
            }
            ma = max(ma, sum);
        }
        for(int i = 0; i < 100; i++) {
            int sum = 0;
            for(int j = 0; j < 100; j++) {
                sum += arr[j][i];
            }
            ma = max(ma, sum);
        }
        int sum = 0;
        for(int i = 0; i < 100; i++) {
            sum += arr[i][i];
        }
        ma = max(ma, sum);
        sum = 0;
        for(int j = 0; j < 100; j++) {
            sum += arr[j][100-j];
        }
        ma = max(ma, sum);
        printf("#%d %d\n", tc, ma);
    }
    return 0;
}
