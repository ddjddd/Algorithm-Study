#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, d, ans = 0;
    cin >> d;
    for (int i = 1; i <= 500; i++) {
        for (int j = i; j <= 500; j++) {
            if (i * i + d == j * j)
                ans++;
            if (i * i + d < j * j)
                break;
        }
    }
    cout << ans << endl;
    return 0;
}