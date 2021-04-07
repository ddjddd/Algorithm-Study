#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char buf[3]; cin >> buf;
    double ans = 4.0;
    ans -= (buf[0] - 'A');
    if (buf[1] == '+') ans += 0.3;
    else if (buf[1] == '-') ans -= 0.3;
    ans = ans < 0 ? 0.0 : ans;

    printf("%.1f\n", ans);

    return 0;
}
