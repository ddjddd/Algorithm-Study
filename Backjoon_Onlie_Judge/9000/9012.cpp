#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        char temp[51];
        cin >> temp;
        int cnt = 0;
        bool invalid = false;
        for (int j = 0; temp[j] != '\0'; j++) {
            if (temp[j] == '(')
                cnt++;
            else if (cnt != 0 && temp[j] == ')')
                cnt--;
            else
                invalid = true;
        }
        if (invalid == 1 || cnt != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
