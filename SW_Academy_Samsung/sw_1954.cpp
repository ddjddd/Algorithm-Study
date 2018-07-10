#include <iostream>

using namespace std;

int main () {
 	int tC; cin>>tC;
    for(int tc=1; tc<=tC; tc++) {
     	int num, m; cin>>m;
        num = m;
        int ret[num][num];
        num--;
        int i = 0, j = 0, c = 1;
        while(num>0) {
            for(int k = 0; k < num; k++) {
                ret[i][j+k] = c++;
            }
            j += num;
            for(int k = 0; k < num; k++) {
            	ret[i+k][j] = c++;
            }
            i += num;
            for(int k = 0; k < num; k++) {
                ret[i][j-k] = c++;
            }
            j -=num;
            for(int k = 0; k < num; k++) {
                ret[i-k][j] = c++;
            }
            i -= num;
            i++; j++; num -= 2;
        }
        if(num == 0) ret[i][j] = c;
        printf("#%d\n", tc);
        for (int k = 0; k < m; k++) {
            for(int t = 0; t < m; t++) {
                printf("%d ", ret[k][t]);
            }
            printf("\n");
        }
    }
    return 0;
}
