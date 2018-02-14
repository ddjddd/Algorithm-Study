#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool compare(const string& a, const string& b){
	if (a.length() < b.length()) return true;
	else if (a.length() == b.length()){
		if (a < b)
			return true;
		else
			return false;
	}
	else
		return false;
}

int main () {
	int max; cin >> max;
	vector <string> arr;
	for(int i = 0; i < max; i++) {
		char buf[51];
		scanf("%s", buf);
		string s = string(buf);
		arr.push_back(s);
	}
	sort(arr.begin(), arr.end(), compare);
	string t = arr[0]; cout << arr[0] << "\n";
	for (int i = 1; i < max; i++) {
		if (arr[i] != t) {
			t = arr[i];
			cout << arr[i] << "\n";
		}
	}
	return 0;
}
