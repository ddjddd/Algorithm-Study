#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b - c)
            cout << "do not advertise\n";
        else if (a == b - c)
            cout << "does not matter\n";
        else
            cout << "advertise\n";
    }

    return 0;
}
