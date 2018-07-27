#include <iostream>

using namespace std;

int main () {
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		char buf[51]; cin >> buf;
		for(int i = 0; buf[i] != '\0'; i++) {
			if(i == 0) cout << "..#..";
			else cout << ".#..";
		}
		cout << endl;
		for(int i = 0; buf[i] != '\0'; i++) {
			if(i == 0) cout << ".#.#.";
			else cout << "#.#.";
		}
		cout << endl;
		for(int i = 0; buf[i] != '\0'; i++) {
			if(i == 0) cout << "#." << buf[i] << ".#";
			else cout <<  "." << buf[i] << ".#";
		}
		cout << endl;
		for(int i = 0; buf[i] != '\0'; i++) {
			if(i == 0) cout << ".#.#.";
			else cout << "#.#.";
		}
		cout << endl;
		for(int i = 0; buf[i] != '\0'; i++) {
			if(i == 0) cout << "..#..";
			else cout << ".#..";
		}
		cout << endl;
	}
	
	return 0;
}
