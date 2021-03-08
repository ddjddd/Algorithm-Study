#include <iostream>
using namespace std;
int main () {
    int a,b,c,d, ret;
    cin >> a >> b >> c >> d;
    ret = a+d -b-c;
    cout << (ret > 0 ? ret : -ret);
    return 0;
}