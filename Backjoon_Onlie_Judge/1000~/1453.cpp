#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool visit[101] = { 0, };
    int n, tmp, ans = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (visit[tmp]) ans++;
        else visit[tmp] = true;
    }
    cout << ans << endl;

    return 0;
}