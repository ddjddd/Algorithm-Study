#include <iostream>

using namespace std;

int m[100][26] = { 0, };
int s = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		char buf[11];
		cin >> buf;
		int bm[26] = { 0, };
		for (int j = 0; buf[j]; j++) {
			bm[buf[j] - 'a']++;
		}

		if (s > 0) {
			bool flag = true;
			for (int j = 0; j < s; j++) {
				flag = true;
				for (int k = 0; k < 26; k++) {
					if (bm[k] != m[j][k]) {
						flag = false;
						break;
					}
				}
				if (flag) break;
			}
			if (!flag) {
				for (int k = 0; k < 26; k++) {
					m[s][k] = bm[k];
				}
				s++;
			}
		}
		else {
			for (int k = 0; k < 26; k++) {
				m[s][k] = bm[k];
			}
			s++;
		}
	}
	cout << s << endl;
	return 0;
}
