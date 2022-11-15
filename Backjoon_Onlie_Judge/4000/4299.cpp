#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i <= a; i++) {
        int ta = a - i;
        if (ta >= i && ta - i == b) {
            cout << ta << ' ' << i << '\n';
            return 0;
        } else if (ta < i && i - ta == b) {
            cout << i << ' ' << ta << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}