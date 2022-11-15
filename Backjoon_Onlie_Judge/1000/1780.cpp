#include <iostream>

using namespace std;

int ret[3] = {
    0,
};

bool check(int **arr, int x, int y, int dx, int dy) {
    int a = arr[x][y];
    for (int i = x; i < dx; i++) {
        for (int j = y; j < dy; j++) {
            if (arr[i][j] != a) {
                return false;
            }
        }
    }
    return true;
}

int clip(int **arr, int x, int y, int dx, int dy) {
    if (!check(arr, x, y, dx, dy)) {
        int size = (dy - y) / 3;
        for (int i = x; i < dx; i += size) {
            for (int j = y; j < dy; j += size) {
                clip(arr, i, j, i + size, j + size);
            }
        }
    } else {
        if (arr[x][y] == -1)
            ret[0]++;
        else if (arr[x][y] == 0)
            ret[1]++;
        else if (arr[x][y] == 1)
            ret[2]++;
    }
}

int main() {
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    clip(arr, 0, 0, n, n);
    cout << ret[0] << endl
         << ret[1] << endl
         << ret[2] << endl;

    for (int i = 0; i < n; i++) {
        delete (arr[i]);
    }
    delete (arr);

    return 0;
}
