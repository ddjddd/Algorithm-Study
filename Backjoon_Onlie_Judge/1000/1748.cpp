#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int power = 1, digit = 1;

    while (true) {
        if (n < power * 10)
            break;
        else {
            power *= 10;
            digit++;
        }
    }
    long long ans = 0;
    while (n > 0) {
        ans += (n - power + 1) * digit;
        n = power - 1;
        digit--;
        power /= 10;
    }
    cout << ans << endl;

    return 0;
}