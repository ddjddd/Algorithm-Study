#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double d, h, w;
    cin >> d >> h >> w;
    double a = sqrt(d * d / (w * w + h * h));
    cout << (int)(h * a) << ' ' << (int)(w * a) << '\n';
    return 0;
}