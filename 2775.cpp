#include <iostream>

using namespace std;

long long m[15][14];

void matrix() {
	for(int i = 0; i < 14; i++) m[0][i] = i+1;
	for(int i = 1; i < 15; i++) m[i][0] = 1;
	for (int i = 1; i < 15; i++) {
		for(int j = 1; j < 14; j++) {
			m[i][j] = m[i][j-1]+ m[i-1][j];			
		}
	}
}

int main () {
	int cases;
	matrix();
	cin >> cases;
	while (cases > 0) {
		int a, b;
		cin >> a >> b;
		cout << m[a][b-1] << endl;
		cases--;
	}
	
	return 0;
}
