#include <cstdio>
#include <iostream>

using namespace std;

typedef long long ll;

bool pwr[1000001];

int main() {
    ll x, y;
    scanf("%lld %lld", &x, &y);
    int cnt = 0;

    for (ll i = 2; i * i <= y; i++) {
        ll start = x / (i * i);
        if (start * i * i != x)
            start++;
        for (ll j = start; i * i * j <= y; j++) {
            pwr[i * i * j - x] = true;
        }
    }

    for (int i = 0; i < y - x + 1; i++) {
        if (pwr[i] == false)
            cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
