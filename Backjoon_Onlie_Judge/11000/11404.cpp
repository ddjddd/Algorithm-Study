#include <iostream>

using namespace std;

void printmap(int n, int arr[101][101]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[101][101] = {0}, tmp[101][101] = {0};
    int n;
    cin >> n;
    int m;
    cin >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] = 987654321;
        }
    }

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (arr[a][b] > c) {
            arr[a][b] = c;
        }
    }

    bool isChanged = true;
    while (isChanged) {
        isChanged = false;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i != j) {
                    for (int k = 1; k <= n; k++) {
                        if (arr[i][k] + arr[k][j] < arr[i][j]) {
                            arr[i][j] = arr[i][k] + arr[k][j];
                            isChanged = true;
                        }
                    }
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || arr[i][j] == 987654321)
                arr[i][j] = 0;
        }
    }
    printmap(n, arr);

    return 0;
}