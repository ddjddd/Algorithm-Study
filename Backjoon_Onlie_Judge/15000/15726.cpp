#include <iostream>
using namespace std;
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << (a * b / c > a * c / b ? a * b / c : a * c / b);
    return 0;
}