#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    char **arr = new char *[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new char[n];
        for (int j = 0; j < n; j++) {
            arr[i][j] = '*';
        }
    }

    int m = n / 3, tmp = 1;

    while (m != 0) {
        for (int i = 0; i < tmp; i++) {
            for (int j = 0; j < tmp; j++) {
                int x = 3 * m * i + m, y = 3 * m * j + m;
                int dx = x + m, dy = y + m;
                for (int ii = x; ii < dx; ii++) {
                    for (int jj = y; jj < dy; jj++) {
                        arr[ii][jj] = ' ';
                    }
                }
            }
        }
        tmp *= 3;
        m /= 3;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
