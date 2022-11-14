// time: 29:51
#include <iostream>

using namespace std;

int n, m, maxA = 0, ans = 0;
int arr[10000];

int checkSUm(int a) {
    int ret = 0;
    for (int i = 0; i < n; i++) ret += arr[i] < a ? arr[i] : a;
    return ret;
}

void binarysearch() {
    int left = 1, right = maxA;

    while(left <= right) {
        int mid = (left + right) / 2;
        if (checkSUm(mid) <= m) {
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        maxA = arr[i] > maxA ? arr[i] : maxA;
    }
    cin >> m;

    binarysearch();
    cout << ans << '\n';

	return 0;
}
