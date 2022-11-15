#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector<int> arr[10][10];
int n, m, year, ans = 0;
int map[10][10], med[10][10], tree[10][10] = {
    0,
};
int dx[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int dy[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };

void get_input() {
    scanf("%d %d %d", &n, &m, &year);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &med[i][j]);
            map[i][j] = 5;
        }

    for (int i = 0; i < m; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        arr[a - 1][b - 1].push_back(c);
    }
    return;
}

void spring_summer() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sort(arr[i][j].begin(), arr[i][j].end());
            int tmp = 0;
            for (int k = 0; k < arr[i][j].size(); k++) {
                if (map[i][j] >= arr[i][j][k]) {
                    map[i][j] -= arr[i][j][k];
                    arr[i][j][k]++;
                    if (arr[i][j][k] % 5 == 0)
                        tmp++;
                } else {
                    for (int tk = k; tk < arr[i][j].size(); tk++) {
                        map[i][j] += (arr[i][j][tk] / 2);
                    }
                    arr[i][j].erase(arr[i][j].begin() + k, arr[i][j].end());
                    break;
                }
            }
            tree[i][j] = tmp;
        }
    }
}

void fall_winter() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int tr = 0; tr < tree[i][j]; tr++) {
                for (int k = 0; k < 8; k++) {
                    int tx = i + dx[k], ty = j + dy[k];
                    if (tx >= 0 && tx < n && ty >= 0 && ty < n) {
                        arr[tx][ty].push_back(1);
                    }
                }
            }
            map[i][j] += med[i][j];
        }
    }
}

void simulate() {
    while (year--) {
        spring_summer();
        fall_winter();

        //		cout << "after " << year << endl;
        //		for(int i = 0; i < n; i++) {
        //			for(int j = 0; j < n; j++) {
        //				cout << arr[i][j].size() << ' ';
        //			}
        //			cout << endl;
        //
        //		}
        //		cout << endl;
        //		for(int i = 0; i < n; i++) {
        //			for(int j = 0; j < n; j++) {
        //				cout << map[i][j] << ' ';
        //			}
        //			cout << endl;
        //		}
        //		cout << endl;
        //
    }
}

void count_tree() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans += arr[i][j].size();
        }
    }
}

int main() {
    get_input();
    simulate();
    count_tree();
    cout << ans << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < arr[i][j].size(); k++) {
                printf("%d %d %d\n", i + 1, j + 1, arr[i][j][k]);
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
