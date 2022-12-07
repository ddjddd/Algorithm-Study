#include <cmath>
#include <iostream>

#define MAX(a, b) (a) > (b) ? (a) : (b)
#define MIN(a, b) (a) < (b) ? (a) : (b)

using namespace std;

struct pos {
    int x, y;
};

pos targetPos[3];

double dist(int i, int j) {
    return sqrt(pow(targetPos[i].x - targetPos[j].x, 2) + pow(targetPos[i].y - targetPos[j].y, 2));
}

bool check() {
    int a = targetPos[0].x - targetPos[1].x;
    int b = targetPos[0].y - targetPos[1].y;

    int c = targetPos[0].x - targetPos[2].x;
    int d = targetPos[0].y - targetPos[2].y;

    return a * d == b * c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        cin >> targetPos[i].x >> targetPos[i].y;
    }

    double ans[3] = {0};

    cout << fixed;
    cout.precision(20);

    for (int i = 0; i < 3; i++) {
        ans[i] = 2 * dist(i, (i + 1) % 3) + 2 * dist(i, (i + 2) % 3);
    }

    double a = MAX(ans[0], MAX(ans[1], ans[2]));
    double b = MIN(ans[0], MIN(ans[1], ans[2]));
    double ret = check() ? -1.0f : a - b;

    cout << ret << '\n';

    return 0;
}