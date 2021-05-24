#include <iostream>
#include <stack>
#include <deque>
#include <vector>

using namespace std;

int n, s, e, ans = 0;
// int count[9] = { 0, };

struct node {
    int count[9];
};
vector<node> event;

int tcount[9] = { 0, };


void dfs(int depth) {
    if (depth == n) {
        for (auto& it : event) {
            bool flag = true;
            for (int i = 1; i <= s && flag; i++) {
                if (it.count[i] != -1) {
                    if (tcount[i] < it.count[i]) flag = false;
                    if ((!it.count[i] && tcount[i])) flag = false;
                }
            }
            if (flag) {
                ans++;
                return;
            }
        }
        return;
    }
    for (int i = 1; i <= s; i++) {
        tcount[i] ++;
        dfs(depth + 1);
        tcount[i]--;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> s >> e;

    for (int tc = 0; tc < e; tc++) {
        string str; cin >> str;
        node nNode;
        for (int i = 1; i <= s; i++) {
            nNode.count[i] = -1;
            tcount[i] = 0;
        }
        while (true) {
            nNode.count[str[2] - '0'] = str[0] - '0';
            if (str.size() < 4) break;
            str = str.substr(4);
        }
        event.push_back(nNode);
    }
    // for (auto& it : event) {
    //     for (int k = 1; k <= s; k++) cout << it.count[k] << ' '; cout << endl;
    // }

    dfs(0);
    cout << ans << endl;

    return 0;
}