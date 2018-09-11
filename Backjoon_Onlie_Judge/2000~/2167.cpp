#include <iostream>

using namespace std;

int main () {
	int n, m;
	cin >> n >> m;
	int** arr = new int*[n];
	for(int i = 0; i < n; i++) {
		arr[i] = new int[m];
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	
	int inst; cin >> inst;
	for(int tt = 0; tt < inst; tt++) {
		int a, b, aa, bb;
		cin >> a >> b >> aa >> bb;
		int ret = 0;
		for(int i = a-1; i < aa; i++) {
			for(int j = b-1; j < bb; j++) {
				ret += arr[i][j];
			}
		}
		cout << ret << endl;
	}
	
	return 0;
}
