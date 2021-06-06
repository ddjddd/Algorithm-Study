#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, m, s, hh, mm, ss;
    scanf("%d:%d:%d", &h, &m, &s);
    scanf("%d:%d:%d", &hh, &mm, &ss);

    int t = h * 3600 + m * 60 + s;
    int tt = hh * 3600 + mm * 60 + ss;

    int ret = tt - t;
    ret = ret < 0 ? ret + (24 * 3600) : ret;

    printf("%02d:%02d:%02d\n", ret / 3600, ret % 3600 / 60, ret % 60);

    return 0;
}