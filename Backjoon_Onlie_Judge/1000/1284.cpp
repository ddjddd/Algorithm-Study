#include <iostream>

using namespace std;

int counter(char *c) {
    if (*c == '1')
        return 3;
    else if (*c == '0')
        return 5;
    else
        return 4;
}

int main() {
    char buf[5];
    cin >> buf;
    char *c;
    while (!(buf[0] == '0' && buf[1] == '\0')) {
        c = buf;
        int ret = 1;

        while (*c != '\0') {
            ret += counter(c);
            c++;
        }
        cout << ret << endl;
        buf[0] = '\0';
        cin >> buf;
    }

    return 0;
}