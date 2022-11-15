#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c[7];
    cin >> c;
    int a = 0;

    for (int i = 0; c[i] != NULL; i++) {
        a *= 16;
        if (c[i] >= 'A')
            a += c[i] - 'A' + 10;
        else
            a += c[i] - '0';
    }

    cout << a << '\n';

    return 0;
}
