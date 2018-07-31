#include <iostream>

using namespace std;

void star(int input, int k) {
	if(input == 1) {
		for(int i = 0 ; i < 2*k+1; i++) cout << '*';
		cout << endl;
		return;
	}
	for(int i = 0 ; i < input-1; i++) cout << ' ';
	for(int i = 0 ; i < 2*k+1; i++) cout << '*';
	cout << endl;
	star(input-1, k+1);
	for(int i = 0 ; i < input-1; i++) cout << ' ';
	for(int i = 0 ; i < 2*k+1; i++) cout << '*';
	cout << endl;
}

int main () {
	int input; cin >> input;
	star(input, 0);
	return 0;
}
