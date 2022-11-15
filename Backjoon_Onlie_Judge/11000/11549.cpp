#include <iostream>
using namespace std;
int main() {
    int n, a, ret = 0;
    cin >> n;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        ret += (a == n);
    }
    cout << ret << '\n';
    return 0;
}