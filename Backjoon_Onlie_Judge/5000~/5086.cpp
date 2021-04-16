#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (!(a % b)) return b;
    return gcd(b, (a % b));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, ret; cin >> a >> b;
    while (a != 0 && b != 0) {
        bool flag = true;
        if (a < b) {
            flag = false;
            ret = gcd(b, a);
        }
        else {
            ret = gcd(a, b);
        }

        if (!flag && ret != 1) cout << "factor\n";
        else if (flag && ret != 1) cout << "multiple\n";
        else cout << "neither\n";
        cin >> a >> b;
    }

    return 0;
}