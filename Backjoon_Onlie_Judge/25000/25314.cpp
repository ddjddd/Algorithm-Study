#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("jh.in", "rt", stdin);

    int n, len;
    cin >> n;
    len = n / 4 + (n % 4 ? 1 : 0);
    for (int i = 0; i < len; i++)
        cout << "long ";
    cout << "int\n";

    return 0;
}