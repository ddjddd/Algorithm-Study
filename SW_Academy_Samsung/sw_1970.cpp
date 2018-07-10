#include <iostream>

using namespace std;

int main () {
	int tC; cin >> tC;
	int arr[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
	for(int tc = 1; tc<=tC; tc++) {
		int input; cin >> input;
		int ret[8] = {0, };
		for(int i = 0; i < 8; i++) {
			ret[i] = input / arr[i];
			input %= arr[i];
		}
		printf("#%d\n", tc);
		for(int i = 0; i < 8; i++) {
			printf("%d ", ret[i]);
		}
		printf("\n");
	}
	
	return 0;
}
