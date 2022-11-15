#include <cmath>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int mo;
    cin >> mo;
    for (int i = 1; i < n; i++) {
        int ja;
        cin >> ja;

        int div = gcd(mo, ja);

        cout << mo / div << '/' << ja / div << '\n';
    }

    return 0;
}
