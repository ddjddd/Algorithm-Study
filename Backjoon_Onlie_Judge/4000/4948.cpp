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
    int input;
    cin >> input;
    while (input != 0) {
        int count = 0;
        for (int i = input + 1; i <= 2 * input; i += 2) {
            if (i == 2) {
                count++;
                i++;
            } else if (!(i % 2))
                i++;
            if (i <= 2 * input && check(i)) {
                count++;
            }
        }
        cout << count << endl;
        cin >> input;
    }

    return 0;
}
