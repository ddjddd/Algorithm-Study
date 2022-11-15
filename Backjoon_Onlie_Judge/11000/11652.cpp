#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int num;
    scanf("%d", &num);

    long long *card = new long long[num]();
    int *cnt = new int[num]();
    int type = 0;

    for (int i = 0; i < num; i++) {
        long long t;
        scanf("%lld", &t);
        bool nw = true;
        for (int j = 0; j < type; j++) {
            if (card[j] == t) {
                cnt[j]++;
                nw = false;
                break;
            }
        }
        if (nw == true) {
            card[type] = t;
            cnt[type++] = 1;
        }
    }
    int max = 0, ret = type - 1;
    for (int i = type - 1; i >= 0; i--) {
        if (cnt[i] > max) {
            max = cnt[i];
            ret = i;
        } else if (cnt[i] == max) {
            if (card[i] < card[ret]) {
                max = cnt[i];
                ret = i;
            }
        }
    }
    printf("%lld\n", card[ret]);

    return 0;
}
