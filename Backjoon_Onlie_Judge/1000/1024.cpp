#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    int as, bs;
    for (long long i = b; i <= 100; i++) {
        long long init = (i * i - i) / 2;
        for (int k = 0; init <= a; init += i, k++) {
            if (init == a) {
                for (int j = k; j < k + i; j++)
                    cout << j << ' ';
                cout << endl;
                return 0;
            }
        }
    }

    cout << "-1\n";

    return 0;
}