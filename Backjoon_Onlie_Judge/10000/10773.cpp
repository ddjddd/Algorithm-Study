#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, ans = 0;
    stack<int> s;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        if (tmp) {
            s.push(tmp);
        } else {
            s.pop();
        }
    }

    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }
    printf("%d\n", ans);

    return 0;
}
