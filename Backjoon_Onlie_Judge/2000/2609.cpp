#include <cstdio>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int a;
        cin >> a;
        int arr[a];
        for (int j = 0; j < a; j++) {
            cin >> arr[j];
        }
        long long sum = 0;
        for (int j = 0; j < a; j++) {
            for (int k = j + 1; k < a; k++) {
                int g = arr[j] > arr[k] ? gcd(arr[j], arr[k]) : gcd(arr[k], arr[j]);
                sum += g;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
