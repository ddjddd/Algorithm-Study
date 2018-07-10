#include <iostream>

using namespace std;

int main () {
 	int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
     	int n, m; cin >> n >> m;   
        int arr[n][n];
		for(int i = 0; i < n; i ++) for(int j = 0; j < n; j++) scanf("%d", &arr[i][j]);
        
        int ma = 0, len = n-m+1;
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < len; j++) {
                int tmp = 0;
                for(int k = 0; k < m; k++) {
                    for(int t = 0; t < m; t++) {
                        tmp += arr[i+k][j+t];
                    }
                }
                ma = max(ma, tmp);
            }
        }
        printf("#%d %d\n", tc, ma);
    }
    return 0;
}
