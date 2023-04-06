#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ret = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
        ret *= 2;
    ret = (ret + 1) * (ret + 1);
    cout << ret << '\n';

    return 0;
}