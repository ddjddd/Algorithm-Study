#include <iostream>
#include <vector>

using namespace std;

int arr[10][10] = {
    0,
};
int ref[10][10] = {
    0,
};
void find(int a, int input) {
    if (a <= 0) {
        cout << input - 1 << endl;
        return;
    }
    for (int i = a; i < 10; i++) {
        if (input <= arr[a][i]) {
            cout << i;
            find(a - 1, input - arr[a][i - 1] + arr[a - 1][0]);
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tC;
    cin >> tC;
    if (tC > 1022) {
        cout << -1 << endl;
        return 0;
    } else if (tC < 10) {
        cout << tC << endl;
        return 0;
    }
    for (int i = 0; i < 10; i++)
        arr[0][i] = 1;

    for (int i = 1; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            int sum = 0;
            for (int k = 0; k < j; k++) {
                sum += arr[i - 1][k];
            }
            arr[i][j] = sum;
        }
    }

    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; j < 10; j++) {
    //         cout << arr[i][j] << '\t';

    //     }
    //     cout << endl;
    // }

    int sum = -1;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            sum += arr[i][j];
            arr[i][j] = sum;
            // cout << arr[i][j] << '\t';
        }
        // cout << endl;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (tC <= arr[i][j]) {
                find(i, tC);
                return 0;
            }
        }
    }

    return 0;
}