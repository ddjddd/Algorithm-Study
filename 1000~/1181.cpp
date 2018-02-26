#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp (string& str1, string& str2) {
	if(str1.size() == str2.size()) {
		return str1 < str2;
	}
	return str1.size() < str2.size();
}

int main () {
	int size;
	scanf(" %d", &size);
	
	vector <string> v;
	
	for(int i = 0; i < size; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}
	
	sort(v.begin(), v.end(), comp);
	
	string tmp = v[0];
	cout << v[0] << '\n';
	for(int i = 1; i < size; i++) {
		if(v[i] != tmp) {
			cout << v[i] << '\n';
		}
		tmp = v[i];
	}
	
	return 0;
}
