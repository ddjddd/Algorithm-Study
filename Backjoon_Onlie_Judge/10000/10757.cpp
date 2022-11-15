#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.size() < b.size()) {
        string tmp = a;
        a = b;
        b = tmp;
    }

    int alen = a.size(), blen = b.size();
    for (int i = 0; i < (alen - blen); i++) {
        b = "0" + b;
    }

    string ans = "";
    bool carry = false;
    for (int i = alen - 1; i >= 0; i--) {
        int tmp = a[i] + b[i] - '0';
        if (carry)
            tmp++;
        carry = false;
        if (tmp > '9') {
            carry = true;
            tmp -= 10;
        }
        ans = (char)tmp + ans;
    }
    if (carry)
        ans = "1" + ans;

    cout << ans << endl;

    return 0;
}
