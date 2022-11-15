#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main() {

    char buf[101];
    fgets(buf, 102, stdin);
    int l = strlen(buf);

    for (int i = 0; i < l; i++) {
        if (buf[i] >= 'a' && buf[i] <= 'z') {
            if (buf[i] + 13 > 'z') {
                buf[i] += 13 - ('z' - 'a' + 1);
            } else
                buf[i] += 13;
        } else if (buf[i] >= 'A' && buf[i] <= 'Z') {
            if (buf[i] + 13 > 'Z') {
                buf[i] += 13 - ('Z' - 'A' + 1);
            } else
                buf[i] += 13;
        }
    }
    printf("%s\n", buf);

    return 0;
}
