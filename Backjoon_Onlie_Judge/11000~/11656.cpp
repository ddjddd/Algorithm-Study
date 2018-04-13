#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
	string str;
	cin >> str;
	int l = str.length();
	vector<string> v;
	v.push_back(str);	
	for(int i = 1; i < l; i++) {
		str.erase(0, 1);
		v.push_back(str);	
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	
	return 0;
}
