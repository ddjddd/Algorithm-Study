#include <iostream>

using namespace std;

struct pos {
    int x, y;
};

pos targetPos[2];

bool bound(pos input) {
    return input.x >= 0 && input.x < 8 && input.y >= 0 && input.y < 8;
}

void movePos(string input) {
    pos dir = {0, 0};

    if (input[0] == 'L')
        dir.x--;
    if (input[0] == 'R')
        dir.x++;
    if (input[0] == 'T' || (input[1] and input[1] == 'T'))
        dir.y++;
    if (input[0] == 'B' || (input[1] and input[1] == 'B'))
        dir.y--;

    targetPos[0].x += dir.x;
    targetPos[0].y += dir.y;

    bool flag = false;
    if (targetPos[0].x == targetPos[1].x && targetPos[0].y == targetPos[1].y) {
        targetPos[1].y += dir.y;
        targetPos[1].x += dir.x;
        flag = true;
    }

    if (!bound(targetPos[0]) || !bound(targetPos[1])) {
        targetPos[0].x -= dir.x;
        targetPos[0].y -= dir.y;
        if (flag) {
            targetPos[1].x -= dir.x;
            targetPos[1].y -= dir.y;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // freopen("jh.in", "rt", stdin);

    string king, stone;
    int moveCount;

    cin >> king >> stone >> moveCount;

    targetPos[0].x = king[0] - 'A';
    targetPos[0].y = king[1] - '1';
    targetPos[1].x = stone[0] - 'A';
    targetPos[1].y = stone[1] - '1';

    for (int i = 0; i < moveCount; i++) {
        string a;
        cin >> a;

        movePos(a);
    }

    char ax = targetPos[0].x + 'A', ay = targetPos[0].y + '1';
    cout << ax << ay << '\n';
    ax = targetPos[1].x + 'A', ay = targetPos[1].y + '1';
    cout << ax << ay << '\n';

    return 0;
}