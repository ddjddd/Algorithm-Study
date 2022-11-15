#include <iostream>

using namespace std;

bool check(int a, int b, int c) {
    if (a >= 1 && a <= 12 && b >= 0 && b <= 59 && c >= 0 && c <= 59)
        return true;
    else
        return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    char buf[101][101];

    for (int i = 0; i < n; i++) {
        cin >> buf[i];
    }

    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (buf[i][j] == '.') {
                bool flag = false;
                while (j < n && buf[i][j + 1] == '.') {
                    j++;
                    flag = true;
                }
                x += flag;
            }
        }
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (buf[i][j] == '.') {
                bool flag = false;
                while (i < n && buf[i + 1][j] == '.') {
                    i++;
                    flag = true;
                }
                y += flag;
            }
        }
    }
    cout << x << ' ' << y << endl;

    return 0;
}