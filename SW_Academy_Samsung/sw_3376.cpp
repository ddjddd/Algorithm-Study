#include <iostream>

using namespace std;

int main () {
	long long arr[101] = {0,1,1,1,2,2, };
	for(int i = 6; i < 101; i++) {
		arr[i] = arr[i-1] + arr[i-5];
	}
	
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		int a; cin >> a;
		cout << '#' <<  tc << ' ' << arr[a] << endl;
	}	
	return 0;
}
