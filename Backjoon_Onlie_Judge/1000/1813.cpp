#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[100001] = {
        0,
    };

    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr[tmp]++;
    }

    int ans = -1;
    for (int i = 0; i < 100001; i++) {
        if (arr[i] == i)
            ans = i;
    }

    cout << ans << endl;

    return 0;
}