#include <iostream>

using namespace std;

int arr[5000];
bool visit[5000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);

	int a, b; cin >> a >> b;
	
	for (int i = 0; i < a; i++) {
		arr[i] = i + 1;
		visit[i] = false;
	}
	int k = b - 1, vc = 0, index = 0;

	cout << '<';
	while (true) {
		int i = 0;
		while (i < k) {
			if (!visit[index]) {
				i++;
			}
			index = (index + 1) % a;
		}
		while(visit[index]) index = (index + 1) % a;
		visit[index] = true;
		

		cout << arr[index];

		vc++;
		if (vc == a) {
			cout << '>' << '\n';
			break;
		}
		else {
			cout << ',' << ' ';
		}
		
		index = (index + 1) % a;
	}

	return 0;
}
