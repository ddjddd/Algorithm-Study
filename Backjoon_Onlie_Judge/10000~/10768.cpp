#include <iostream>

using namespace std;

int main() {
    int a, b; cin >> a >> b;
    if (a < 2) cout << "Before\n";
    else if (a > 2) cout << "After\n";
    else {
        if (b < 18) cout << "Before\n";
        else if (b > 18) cout << "After\n";
        else cout << "Special\n";
    }

    return 0;
}