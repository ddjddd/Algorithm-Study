#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	int tC;
	cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		int a, b;
		cin >> a >> b;
		char** table = new char*[a];
		
		for(int i = 0; i < a; i++) {
			table[i] = new char[b];
			for(int j = 0; j < b; j++) {
				scanf(" %c", &table[i][j]);
			}
		}
		
		for(int i = 0; i < a; i++) {
			for(int j = b-1; j >= 0; j--) {
				cout << table[i][j];
			}
			cout << '\n';
		}
	}
	return 0;
} 
