#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0, i = 0;
    char buf[101];
    cin >> buf;
    while (buf[i]) {
        if (buf[i] == 'a' || buf[i] == 'e' || buf[i] == 'i' || buf[i] == 'o' || buf[i] == 'u')
            ans++;
        i++;
    }
    cout << ans << '\n';

    return 0;
}
