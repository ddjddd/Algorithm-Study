#include <iostream>

using namespace std;

int arr[8], ans = 0;
bool visit[8];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < 6; i++) {
		int idx = -1, tmax = 0;
		for (int j = 0; j < 8; j++) {
			if (!visit[j] && tmax < arr[j]) {
				tmax = arr[j];
				idx = j;
			}
		}
		visit[idx] = true;
		ans += arr[idx];
	}
	
	cout << ans << '\n';
	for (int i = 0; i < 8; i++) {
		if (visit[i]) cout << i + 1 << ' ';
	}
	cout << '\n';

	return 0;
}
