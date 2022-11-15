#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int amin = 0, amax = 0, digit = 1;
    while (a || b) {
        int ta = a % 10, tb = b % 10;
        int tmin = ta + tb;
        int tmax = ta + tb;
        if (ta == 5)
            tmax++;
        else if (ta == 6)
            tmin--;
        if (tb == 5)
            tmax++;
        else if (tb == 6)
            tmin--;

        amin += tmin * digit;
        amax += tmax * digit;

        a /= 10;
        b /= 10;
        digit *= 10;
    }
    cout << amin << ' ' << amax << '\n';
    return 0;
}
