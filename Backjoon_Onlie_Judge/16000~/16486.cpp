#include <iostream>
using namespace std;

#define PI 3.141592
int main() {
    double a, b, ret = 0.0; cin >> a >> b;
    ret = 2 * a + 2 * PI * b;
    printf("%.6lf\n", ret);
    return 0;
}