#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        char buf[6] = { 0, };
        cin >> buf;
        if (buf[0] == '0') break;

        int len = strlen(buf);
        bool ans = true;
        for (int i = 0; i < len / 2; i++) {
            if (buf[i] != buf[len - 1 - i]) {
                ans = false;
                break;
            }
        }
        cout << (ans ? "yes\n" : "no\n");
    }

    return 0;
}
