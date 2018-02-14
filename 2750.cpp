#include <iostream>
#include <algorithm>

using namespace std;

int main () {
	int max;
	cin >> max;
	int* arr = new int[max];
	for(int i = 0; i < max; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+max);
	for(int i = 0; i < max; i++) {
		cout << arr[i] << endl;
	}	
	return 0;
}
