#include <iostream>

using namespace std;

char map[51][51];
int n, m;
bool x[51] = {
    0,
},
     y[51] = {
         0,
     };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> map[i];
    }

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 'X')
                x[i] = true, y[j] = true;
        }
    }

    for (int i = 0; i < n; i++) {
        if (!x[i])
            a++;
    }
    for (int i = 0; i < m; i++) {
        if (!y[i])
            b++;
    }

    cout << (a > b ? a : b) << endl;

    return 0;
}