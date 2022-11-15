// time: 20:25
#include <iostream>

using namespace std;

int n;
bool arr[50][50] = {0, };
bool arr2[50][50] = {0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;

        for (int j = 0; j < n; j++) {
            bool tmp = a[j] == 'Y' ? true : false;
            arr[j][i] = arr[i][j] = arr2[i][j] = arr2[j][i] = tmp;

        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if (k != i && k != j && i != j) {
                    if (arr[i][k] && arr[k][j]) {
                        arr2[i][j] = true;
                    }
                }
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int tmp = 0;
        for(int j = 0; j < n; j++) {
            if (arr2[i][j]) tmp++;
        }
        ans = ans < tmp ? tmp: ans;
    }
    cout << ans << endl;


	return 0;
}
