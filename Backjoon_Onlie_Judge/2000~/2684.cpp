#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int tC; cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        char buf[41]; cin >> buf;
        int cur = 0;
        if (buf[0] == 'H') cur += 1 << 2;
        if (buf[1] == 'H') cur += 1 << 1;

        int arr[8] = { 0, };
        for (int i = 2; i < 40; i++) {
            if (buf[i] == 'H') cur += 1;
            arr[cur]++;

            cur <<= 1;
            cur &= 7;
        }
        for (int i = 0; i < 8; i++) cout << arr[i] << ' ';
        cout << endl;
    }

    return 0;
}