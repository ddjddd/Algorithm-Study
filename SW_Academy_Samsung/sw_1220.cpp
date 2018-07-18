 #include <iostream>

using namespace std;

int main () {
//	freopen("input.txt", "r", stdin);
	int tC; tC = 10;
	for(int tc = 1; tc <= tC; tc++) {
		int num; scanf("%d", &num);
		int arr[num][num];
		for(int i = 0; i < num; i++) for(int j = 0; j < num; j++) scanf("%d", &arr[i][j]);
		int count = 0;
		for(int i = 0; i < num; i++) {
			bool on = false;
			for(int j = 0; j < num; j++) {
				if(!on && arr[j][i] == 1) on = true;
				else if(on && arr[j][i] == 2) {
					on = false;
					count++;
				}
			}
		}
		printf("#%d %d\n", tc, count);
	}
	
	return 0;
}
