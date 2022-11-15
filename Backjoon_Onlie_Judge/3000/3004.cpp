#include <iostream>
using namespace std;
int main() {
    int a, ret;
    cin >> a;
    ret = a % 2 ? (a / 2 + 2) * (a / 2 + 1) : (a / 2 + 1) * (a / 2 + 1);
    cout << ret << '\n';
    return 0;
}