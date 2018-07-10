#include <iostream>

using namespace std;

int main () {
 	int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
     	int num, rank;
        cin >>num >> rank;
        int arr[num];
        for(int i = 0; i < num; i++) {
            int a, b, c; scanf("%d %d %d", &a, &b, &c);
        	arr[i] = a*35 + b*45 + c*20;
        }
        int index = arr[rank-1], count = 0;
        for(int i = 0; i < num ; i++) {
            if (arr[i] > index) count++;
        }
        char tab[10][3] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
        printf("#%d %s\n", tc, tab[count/(num/10)]);
    }
    return 0;
}
