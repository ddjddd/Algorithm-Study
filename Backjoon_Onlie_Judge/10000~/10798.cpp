#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char buf[5][16] = { 0, };
    for (int i = 0; i < 5; i++) cin >> buf[i];

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (buf[j][i] != '\0' || buf[j][i] != 0) cout << buf[j][i];
        }
    }
    cout << endl;

    return 0;
}