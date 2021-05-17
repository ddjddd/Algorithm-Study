#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int la = n / 2 + n % 2, lb = n / 2;
        cout << '*';
        for (int j = 1; j < la; j++) cout << " *";
        cout << endl;

        if (lb) {
            for (int j = 0; j < lb; j++) cout << " *";
            cout << endl;
        }

    }

    return 0;
}