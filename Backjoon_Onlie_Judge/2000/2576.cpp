#include <iostream>

using namespace std;

int main() {
    int tmp = 0, ret = 0, m = 1000;
    for (int i = 0; i < 7; i++) {
        cin >> tmp;
        if (tmp & 1) {
            ret += tmp;
            m = min(m, tmp);
        }
    }
    if (ret == 0)
        cout << "-1\n";
    else
        cout << ret << '\n'
             << m << '\n';
}
