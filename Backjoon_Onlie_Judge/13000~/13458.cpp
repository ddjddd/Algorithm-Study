#include <iostream>

using namespace std;

int main () {
	int num; cin >> num;
	int* arr = new int[num];
	for(int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	int m, n;
	cin >> m >> n;
	long long cnt = 0;
	for(int i = 0; i < num; i++) {
		int tmp = arr[i];
		if(tmp <= m) cnt++;
		else {
			tmp -= m; cnt++;
			int ttmp = tmp % n;
			if(ttmp) cnt++;
			cnt += tmp/n;
		}
	}
	cout << cnt << endl;
	
	return 0;
}
