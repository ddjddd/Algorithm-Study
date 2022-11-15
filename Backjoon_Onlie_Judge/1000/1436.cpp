#include <iostream>

using namespace std;

bool solve(int input) {
    bool flag = false;
    int scnt = 0;
    while (input) {
        if (input % 10 == 6) {
            scnt++;
        } else {
            scnt = 0;
        }
        if (scnt == 3)
            return true;

        input /= 10;
    }
    return false;
}

int main() {
    int n, tmp = 666, cnt = 0;
    cin >> n;
    while (cnt != n) {

        if (solve(tmp))
            cnt++;
        tmp++;
    }
    cout << tmp - 1 << endl;

    return 0;
}
