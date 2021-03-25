#include <iostream>

using namespace std;


int main() {
    int tc = 0; cin >> tc;
    int a = 100, b = 100, x, y;
    for (int i = 0; i < tc; i++) {
        cin >> x >> y;
        if (x < y) a -= y;
        else if (x > y) b -= x;
    }
    printf("%d\n%d\n", a, b);

    return 0;
}