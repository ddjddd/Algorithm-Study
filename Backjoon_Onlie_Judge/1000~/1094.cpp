#include <iostream>

using namespace std;

int getSum (int* arr, int num) {
	int ret = 0;
	for(int i = 0; i < num; i++) {
		ret += arr[i];
	}
	return ret;
}

int main () {
	int sum = 0, num = 1, input;
	int arr[64] = {64, 0, };
	cin >> input;
	
	while(getSum(arr, num) > input) {
		arr[num-1] /= 2;
		arr[num] = arr[num-1];
		if(getSum(arr, num) < input) {
			num++;
		}
		if(getSum(arr, num) == input) break;
	}
	cout << num << '\n';

	return 0;
}
