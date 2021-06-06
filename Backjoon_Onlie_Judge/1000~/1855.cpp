#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int col;
    string s;
    cin >> col >> s;
    int len = s.size();
    int row = len / col + (len % col ? 1 : 0);

    char tab[20][20] = { 0, };
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int idx = !(i % 2) ? i * col + j : i * col + col - 1 - j;
            if (idx < len) tab[i][j] = s[idx];

        }
    }

    for (int j = 0; j < col; j++) for (int i = 0; i < row; i++)
        if (tab[i][j]) cout << tab[i][j];


    return 0;
}