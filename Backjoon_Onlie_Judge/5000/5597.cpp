#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool visit[31] = {
        0,
    };
    int t;
    for (int i = 0; i < 28; i++) {
        cin >> t;
        visit[t] = true;
    }
    for (int i = 1; i <= 30; i++) {
        if (!visit[i])
            cout << i << '\n';
    }
    return 0;
}
