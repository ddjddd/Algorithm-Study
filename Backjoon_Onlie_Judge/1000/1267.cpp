#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 0, y = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        y += (tmp / 30) * 10 + 10;
        m += (tmp / 60) * 15 + 15;
    }
    if (m > y)
        printf("Y %d\n", y);
    else if (m == y)
        printf("Y M %d\n", m);
    else
        printf("M %d\n", m);
    return 0;
}