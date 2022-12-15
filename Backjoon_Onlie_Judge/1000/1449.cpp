#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, l;
    cin >> n >> l;

    bool arr[1001] = {0};

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr[tmp] = true;
    }

    int ans = 0;
    for (int i = 1; i < 1001; i++) {
        if (arr[i]) {
            ans++;
            i = i + l - 1;
        }
    }
    cout << ans << endl;

    return 0;
}