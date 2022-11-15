#include <iostream>

using namespace std;

int input, n, ans = 0, tmp, digit = 0;
int str[6];
bool arr[10] = {
    false,
};

int solve() {
    int ret = input - 100 > 0 ? input - 100 : 100 - input;
    for (int i = 0; i <= 1000000; i++) {
        bool flag = false;
        int cnt = 0;
        int tmp = i;
        if (tmp == 0) {
            if (arr[tmp]) {
                flag = true;
            }
            cnt++;
        }
        while (tmp) {
            if (arr[tmp % 10]) {
                flag = true;
                break;
            }
            tmp = tmp / 10;
            cnt++;
        }
        if (!flag) {
            int tt = input - i;
            tt = tt > 0 ? tt : -tt;
            ret = min(ret, cnt + tt);
        }
    }
    return ret;
}

int main() {
    cin >> input >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[a] = true;
    }
    ans = solve();
    cout << ans << endl;

    return 0;
}
