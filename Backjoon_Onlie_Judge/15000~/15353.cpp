#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b, t, ans;
	cin >> a >> b;
	if(b.length() > a.length()) {
		t = a;
		a = b;
		b = t;
	}

	bool flag = false;
	for(int i = a.length()-1, j = b.length()-1; i >= 0; i--, j--) {
		int tmp = a[i]-48;
		if(j >= 0)
			tmp += b[j]-48;
		if(flag) {
			tmp++;
			flag = false;
		}
		if(tmp >= 10) {
			flag = true;
			tmp -= 10;
		}
		ans = (char)(tmp+48) + ans;
	}
	if(flag) ans = '1' + ans;
	cout << ans << endl;

	return 0;
}