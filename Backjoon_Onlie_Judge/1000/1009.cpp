#include <iostream>

using namespace std;

int main() {
    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        int a, b;
        cin >> a >> b;
        int ret = a % 10;
        for (int i = 1; i < b; i++) {
            ret *= a;
            ret %= 10;
        }
        if (ret == 0)
            ret = 10;
        cout << ret << endl;
    }
    return 0;
}
