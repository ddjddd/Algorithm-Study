#include <iostream>

using namespace std;

int main() {
    int sum=0, a, b, c, d;
    cin >> a >> b >> c >> d;
    sum = a+b+c+d;
    cout << sum/60 << '\n' << sum%60 << '\n';
    return 0;
}