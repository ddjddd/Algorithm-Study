#include <iostream>

using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (!n)
            break;
        int ret = 1, a, b;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            ret = ret * a - b;
        }
        cout << ret << endl;
    }

    return 0;
}