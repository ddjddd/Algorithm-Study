#include <iostream>

using namespace std;

int main () {
 	int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
     	int m, k; cin >> m >> k;
        int arr[m][m];
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
        		scanf("%d", &arr[i][j]);
            }
        }
        int count = 0;
		for(int i = 0; i < m; i++) {
            for(int j = 0; j < m-k+1; j++) {
                bool plus = true;
                if(arr[i][j]) {
                 	if((j == 0 || !arr[i][j-1]) && (j+k == m || !arr[i][j+k])) {
                     	for(int t = 0; t < k; t++) {
                            if(!arr[i][j+t]) {plus = false; break;}
                        }
                    }else plus = false;
                }else plus = false;
                if(plus) {count++;}
            }
        }
        
        for(int i = 0; i < m-k+1; i++) {
            for(int j = 0; j < m; j++) {
                bool plus = true;
                if(arr[i][j]) {
                 	if((i == 0 || !arr[i-1][j]) && (i+k == m || !arr[i+k][j])) {
                     	for(int t = 0; t < k; t++) {
                            if(!arr[i+t][j]) {plus = false; break;}
                        }
                    }else plus = false;
                }else plus = false;
                if(plus) {count++;}
            }
        }
        
        printf("#%d %d\n", tc, count);
    }
    return 0;
}
