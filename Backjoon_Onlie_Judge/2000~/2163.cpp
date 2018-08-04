#include <iostream>

using namespace std;

int separate(int x, int y) {
	int big, small;
	big = x>y? x : y;
	small = x>y? y : x;
	
	if(small == 1) {
		switch(big) {
			case 1: return 0;
			case 2: return 1;
			case 3: return 2;
		}
	}
	else{
		return separate(big/2, small) + separate(big - big/2, small) + 1;
	}
}

int main () {
	int a, b; cin >> a >> b;
	cout << separate(a, b) << endl;
	return 0;
}
