#include <iostream>

using namespace std;

int maxIdx = 0;
int tree[10000] = { 0 };

void solve(int left, int right) {
    if (left >= right) return;
    if (left == right-1) {
        cout << tree[left] << endl;
        return;
    }

    int mid = left+1;
    for(mid; mid < right; mid++) {
        if (tree[mid] > tree[left]) {
            break;
        }
    }

    solve(left+1, mid);
    solve(mid, right);
    cout << tree[left] << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int num;
    int cur = 0;
	while (cin >> num) {
        if (num == 0) break;
		tree[maxIdx++] = num;
	}
    solve(0, maxIdx);

	return 0;
}