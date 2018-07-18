#include <iostream>

using namespace std;

int main() {
 	int tC; cin >> tC;
    for(int tc = 1; tc<=tC; tc++) {
    	int num; cin>>num;
        int arr[num][num];
        for(int i = 0; i < num; i++) for (int j = 0; j < num; j++) scanf("%d", &arr[i][j]);
        printf("#%d\n", tc);
        for(int i = 0; i < num; i++) {
            for(int j = 0; j < num; j++) {
                cout << arr[num-1-j][i];
            }
            cout << ' ';
            for(int j = 0; j < num; j++) {
                cout << arr[num-1-i][num-1-j];
            }
            cout << ' ';
            for(int j = 0; j < num; j++) {
                cout << arr[j][num-1-i];
            }
        	cout << endl;
        }
    }
    
    
    return 0;
}
