#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    char buf[1001][1001];

    for (int i = 0; i < n; i++) cin >> buf[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (buf[i][j] != '.') cout << '*';

            else {
                int tmp = 0;
                for (int ti = i - 1; ti <= i + 1; ti++) {
                    for (int tj = j - 1; tj <= j + 1; tj++) {
                        if (ti >= 0 && ti < n && tj >= 0 && tj < n && buf[ti][tj] != '.') {
                            tmp += buf[ti][tj] - '0';
                        }
                    }
                }
                cout << (tmp > 9 ? 'M' : (char)(tmp + '0'));
            }
        }
        cout << endl;
    }

    return 0;
}