#include <iostream>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    int num;
    cin >> num;
    int **arr = new int *[num];
    for (int i = 0; i < num; i++) {
        arr[i] = new int[num];
        for (int j = 0; j < num; j++) {
            cin >> arr[i][j];
        }
    }

    for (int k = 0; k < num; k++) {
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                if (arr[i][k] && arr[k][j])
                    arr[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
