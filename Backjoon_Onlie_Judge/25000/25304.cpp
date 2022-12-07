#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, c;
    cin >> n >> c;

    for (int i = 0; i < c; i++) {
        int a, b;
        cin >> a >> b;

        n -= a * b;
    }

    if (n)
        cout << "No\n";
    else
        cout << "Yes\n";

    return 0;
}