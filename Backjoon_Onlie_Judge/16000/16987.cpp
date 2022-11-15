#include <iostream>

using namespace std;

int n, hp[8], wt[8];

bool is_broken(int cur) {
    return hp[cur] > 0 ? false : true;
}

bool is_exist(int cur) {
    for (int i = 0; i < n; i++) {
        if (i != cur && hp[i] > 0)
            return true;
    }
    return false;
}

int count_broken() {
    int ret = 0;
    for (int i = 0; i < n; i++) {
        if (hp[i] <= 0)
            ret++;
    }
    return ret;
}

int m = 0;

void dfs(int cur) {
    if (cur == n || !is_exist(cur)) {
        m = max(m, count_broken());
        return;
    }
    if (is_broken(cur)) {
        dfs(cur + 1);
    } else {
        for (int i = 0; i < n; i++) {
            if (i != cur && !is_broken(i)) {
                hp[cur] -= wt[i];
                hp[i] -= wt[cur];
                dfs(cur + 1);
                hp[cur] += wt[i];
                hp[i] += wt[cur];
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> hp[i] >> wt[i];
    }
    dfs(0);
    cout << m << endl;

    return 0;
}
