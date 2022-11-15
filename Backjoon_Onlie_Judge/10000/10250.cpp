#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases > 0) {
        int h, w, n, th, tw;
        cin >> h >> w >> n;
        tw = (n - 1) / h + 1;
        th = n % h;
        th == 0 ? th = h : th;
        cout << th;
        tw > 9 ? cout << tw << endl : cout << "0" << tw << endl;
        cases--;
    }
    return 0;
}
