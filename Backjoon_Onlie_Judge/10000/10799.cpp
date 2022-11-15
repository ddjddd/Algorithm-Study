#include <iostream>

using namespace std;

char buf[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> buf;
    int ret = 0, stack = 0, a = 0;

    while (buf[a] == ')' || buf[a + 1] == ')' || buf[a + 1] == '(') {
        if (buf[a] == '(') {
            if (buf[a + 1] == ')') {
                ret += stack;
                a++;
            } else {
                stack++;
            }
        } else {
            ret++;
            stack--;
        }
        a++;
    }

    cout << ret << '\n';
    return 0;
}
