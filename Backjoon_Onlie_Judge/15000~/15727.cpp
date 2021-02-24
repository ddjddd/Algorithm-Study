#include <iostream>
using namespace std;
int main () {
    int a; cin >> a;
    cout <<  (a%5 ? a/5 + 1 : a/5) << endl;
    return 0;
}