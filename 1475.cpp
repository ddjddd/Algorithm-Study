#include <iostream>

using namespace std;

int main () {
	int numb;
	cin >> numb;
	int setC[10] = {0, };
	
	if (numb == 0) {
		cout << "1" << endl;
		return 0;
	}
	while (numb != 0) {
		setC[numb%10]++;
		numb /= 10;
	}
	int temp = setC[6] + setC[9] + 1;
	setC[6] = setC[9] = temp/2;
	
	temp = setC[0];
	for(int i = 1; i < 10; i++) {
		setC[i] > temp ? temp = setC[i] : temp;
	}
	
	cout << temp << endl;
		
	return 0;
}
