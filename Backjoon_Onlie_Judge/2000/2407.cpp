#include <iostream>
#include <string>

using namespace std;

string dp[101][101];

string add(string a, string b) {
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
    return ans;
}

void func() {
    dp[1][0] = "1";
    dp[1][1] = "1";
    for (int i = 2; i < 101; i++) {
        dp[i][0] = "1";
        for (int j = 1; j < i; j++) {
            dp[i][j] = add(dp[i - 1][j - 1], dp[i - 1][j]);
        }
        dp[i][i] = "1";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    func();
    cout << dp[a][b] << '\n';

    return 0;
}
