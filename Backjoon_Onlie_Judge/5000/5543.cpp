#include <iostream>

using namespace std;

int main() {
    int a, b, t;
    cin >> t;
    a = t;
    cin >> t;
    a = a < t ? a : t;
    cin >> t;
    a = a < t ? a : t;

    cin >> t;
    b = t;
    cin >> t;
    b = b < t ? b : t;

    cout << a + b << endl;

    return 0;
}
