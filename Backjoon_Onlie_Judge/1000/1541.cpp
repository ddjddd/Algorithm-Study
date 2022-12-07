#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char buf[51];
    cin >> buf;

    char *c = &buf[0];
    int arr[25] = {0};

    int ans = 0;
    bool flag = false;

    while (*c != '\0') {
        int tmp = 0;
        while (*c != '\0' && *c != '+' && *c != '-') {
            tmp *= 10;
            tmp += *c - '0';
            c++;
        }

        if (flag) {
            ans -= tmp;
        } else {
            ans += tmp;
        }

        if (*c == '-') {
            flag = true;
        }

        if (*c == '\0')
            break;
        c++;
    }
    cout << ans << endl;

    return 0;
}