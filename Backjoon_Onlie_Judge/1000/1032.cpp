#include <iostream>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    string arr[50];
    for (int i = 0; i < tc; i++) {
        cin >> arr[i];
    }
    int len = arr[0].size();
    for (int i = 0; i < len; i++) {
        bool flag = true;
        char tmp = arr[0][i];
        for (int j = 1; j < tc; j++) {
            if (tmp != arr[j][i]) {
                flag = false;
                break;
            }
        }
        if (!flag)
            cout << '?';
        else
            cout << arr[0][i];
    }
    cout << '\n';

    return 0;
}
