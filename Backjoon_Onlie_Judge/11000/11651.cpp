#include <algorithm>
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

typedef pair<int, int> pp;

int main() {
    int num;
    scanf("%d", &num);

    vector<pp> v;
    for (int i = 0; i < num; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        v.push_back(pp(y, x));
    }

    sort(v.begin(), v.end());
    vector<pp>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++) {
        printf("%d %d\n", iter->second, iter->first);
    }
    return 0;
}
