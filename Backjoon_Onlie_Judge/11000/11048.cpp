#include <iostream>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int **map = new int *[n];

    for (int i = 0; i < n; i++) {
        map[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int tmp = 0;
            if (i > 0) {
                tmp = map[i - 1][j];
            }
            if (j > 0) {
                tmp = MAX(tmp, map[i][j - 1]);
            }
            map[i][j] += tmp;
        }
    }

    cout << map[n - 1][m - 1] << endl;
    return 0;
}
