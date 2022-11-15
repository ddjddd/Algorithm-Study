#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> pii;

int main() {
    int input;
    cin >> input;
    int n = 1;
    for (int i = 1; i < input; i++) {
        n = 2 * n + 1;
    }
    pii *arr = new pii[n];
    int cur = 0;
    for (int i = 0; i < input; i++) {
        arr[cur].first = 1;
        arr[cur].second = 3;
        for (int j = 0; j < cur; j++) {
            int x = arr[j].first, y = arr[j].second;
            if (x == 1)
                x = 2;
            else if (x == 2)
                x = 1;
            if (y == 1)
                y = 2;
            else if (y == 2)
                y = 1;

            arr[j + cur + 1].first = x;
            arr[j + cur + 1].second = y;

            x = arr[j].first, y = arr[j].second;
            if (x == 2)
                x = 3;
            else if (x == 3)
                x = 2;
            if (y == 2)
                y = 3;
            else if (y == 3)
                y = 2;

            arr[j].first = x;
            arr[j].second = y;
        }
        cur = 2 * cur + 1;
    }

    cout << n << endl;
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i].first, arr[i].second);
    }
    return 0;
}
