#include <iostream>

using namespace std;

int main () {
	int tC; cin >> tC;
	int cute=0, ncute=0;
	for(int i = 1; i <= tC; i++) {
		int a; cin >> a;
		if(a) cute++;
		else ncute++;
	}
	if(cute > ncute) cout << "Junhee is cute!\n";
	else cout <<"Junhee is not cute!\n";
	return 0;
}
