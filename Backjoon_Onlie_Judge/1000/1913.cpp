#include <iostream>

using namespace std;

int map[1000][1000];
int n, f;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> f;

    int num = n * n;
    int iini = 0, jini = 0, imax = n - 1, jmax = n - 1;
    for (int i = 0, j = 0, k = num; k >= 1; k--) {
        if (i < imax && j == jini) {
            map[i++][j] = k;
        } else if (i == imax && j < jmax) {
            map[i][j++] = k;
        } else if (i > iini && j == jmax) {
            map[i--][j] = k;
        } else if (i == iini && j > jini) {
            map[i][j--] = k;
        }

        if (i == iini && j == jini) {
            iini++;
            jini++;
            imax--;
            jmax--;
            j++;
            i++;
        }
    }
    map[n / 2][n / 2] = 1;
    int fi = 0, fj = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << map[i][j] << ' ';
            if (map[i][j] == f) {
                fi = i;
                fj = j;
            }
        }
        cout << '\n';
    }
    cout << fi + 1 << ' ' << fj + 1 << '\n';
    return 0;
}
