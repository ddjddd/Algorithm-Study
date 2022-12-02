#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("jh.in", "r", stdin);

    string s;
    getline(cin, s);

    int count = 0, stack = 0;

    for (auto &it : s) {
        if (it == ')') {
            if (!stack)
                count++;
            else
                stack--;
        } else
            stack++;
    }

    cout << count + stack << '\n';

    return 0;
}
