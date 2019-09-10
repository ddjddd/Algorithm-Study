#include <iostream>

using namespace std;

bool visit[8];
int arr[8];
int n;

void btr(int step) {

	if (step == n) {
		cout << arr[0];
		for (int i = 1; i < n; i++) {
			cout << ' ' << arr[i];
		}
		cout << '\n';
		return;
	}

	else {
		for (int i = 0; i < n; i++) {
			if (!visit[i]) {
				visit[i] = true;
				arr[step] = i+1;
				btr(step + 1);
				visit[i] = false;
			}
		}
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	btr(0);

	return 0;
}
