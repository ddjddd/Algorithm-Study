#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
	vector<int> v;
	int c;
	cin >> c;
	for(int i = 0; i < c; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	cout << v[c/2];
	return 0;
}
