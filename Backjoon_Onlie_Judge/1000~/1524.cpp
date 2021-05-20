#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int tC; cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        priority_queue<int> a;
        priority_queue<int> b;
        int n, m, tmp;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            a.push(tmp);
        }
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            b.push(tmp);
        }
        int i = 0;
        while (a.size() && b.size()) {
            if (a.top() < b.top()) {
                a.pop();
            }
            else b.pop();
        }

        if (a.empty()) cout << "B\n";
        else cout << "S\n";
    }

    return 0;
}