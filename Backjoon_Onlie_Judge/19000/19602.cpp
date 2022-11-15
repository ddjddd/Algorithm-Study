#include <iostream>
using namespace std;
int main() {
    int a, ret = 0;
    for (int i = 1; i <= 3; i++) {
        cin >> a;
        ret += a * i;
    }
    cout << (ret < 10 ? "sad\n" : "happy\n");
    return 0;
}