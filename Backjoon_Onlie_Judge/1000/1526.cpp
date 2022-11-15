#include <iostream>

using namespace std;

int ans = 0;
int num = 0;

void dfs(int cur, int depth) {
    if (num < cur)
        return;
    else
        ans = max(ans, cur);

    dfs(cur + 4 * depth, depth * 10);
    dfs(cur + 7 * depth, depth * 10);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> num;
    dfs(0, 1);
    cout << ans << endl;

    return 0;
}