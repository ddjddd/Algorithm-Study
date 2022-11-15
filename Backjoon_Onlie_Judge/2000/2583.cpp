#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

typedef pair<int, int> pos;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int **map = new int *[n];
    for (int i = 0; i < n; i++) {
        map[i] = new int[m];
        for (int j = 0; j < m; j++) {
            map[i][j] = 0;
        }
    }

    for (int t = 0; t < k; t++) {
        int x1, y1, x2, y2;
        cin >> y1 >> x1 >> y2 >> x2;
        for (int i = x1; i < x2; i++) {
            for (int j = y1; j < y2; j++) {
                map[i][j] = 1;
            }
        }
    }

    stack<pos> s;
    vector<int> v;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 0) {
                s.push(make_pair(i, j));
                map[i][j] = 1;
                int size = 0;
                while (!s.empty()) {
                    pos a = s.top();
                    s.pop();
                    size++;
                    for (int t = 0; t < 4; t++) {
                        int tx = a.first + dx[t];
                        int ty = a.second + dy[t];
                        if (tx >= 0 && tx < n && ty >= 0 && ty < m && map[tx][ty] == 0) {
                            s.push(make_pair(tx, ty));
                            map[tx][ty] = size;
                        }
                    }
                }
                v.push_back(size);
                count++;
            }
        }
    }

    sort(v.begin(), v.end());
    cout << count << endl;
    vector<int>::iterator iter = v.begin();
    for (iter = v.begin(); iter != v.end(); ++iter) {
        cout << *iter << ' ';
    }
    cout << endl;

    return 0;
}
