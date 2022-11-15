#include <iostream>
using namespace std;
int main() {
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    cout << 56 * a[0] + 24 * a[1] + 14 * a[2] + 6 * a[3] << '\n';
    return 0;
}