#include <iostream>

using namespace std;

bool check(int n) {
    if (n <= 2)
        return true;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    bool arr[10001];
    arr[0] = false;
    arr[1] = true;
    arr[2] = true;
    arr[3] = true;
    for (int i = 5; i < 10001; i++) {
        if (i % 2 == 0)
            arr[i] = false;
        else if (check(i))
            arr[i] = true;
    }
    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        int n, a = 0, b = 0;
        cin >> n;
        for (int i = n; i >= n / 2; i--) {
            if (arr[i] && arr[n - i]) {
                a = n - i > i ? i : n - i;
                b = n - a;
            }
        }
        cout << a << ' ' << b << endl;
    }
    return 0;
}
