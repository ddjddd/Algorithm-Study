#include <iostream>
#include <cmath>

using namespace std;

char* cvt(char* c) {
    switch (*c) {
    case '-': *c = 0; break;
    case '\\': *c = 1; break;
    case '(': *c = 2; break;
    case '@': *c = 3; break;
    case '?': *c = 4; break;
    case '>': *c = 5; break;
    case '&': *c = 6; break;
    case '%': *c = 7; break;
    case '/': *c = -1; break;
    default:
    break;
    }
    return c;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans;
    char buf[9];
    while (scanf("%s", buf)) {
        if (buf[0] == '#' && buf[1] == '\0') break;
        ans = 0;
        char* c = buf;
        while (*c != '\0') {
            ans <<= 3;
            ans += *cvt(c);
            c++;
        }

        cout << ans << endl;
    }

    return 0;
}
