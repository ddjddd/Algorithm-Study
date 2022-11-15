#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector<int> prime;
vector<int>::iterator it;

void prime_num() {
    bool check[1001] = {
        false,
    };
    for (int i = 2; i <= 1000; i++) {
        if (check[i])
            continue;
        prime.push_back(i);
        for (int j = i * i; j <= 1000; j += i)
            check[j] = true;
    }
}

void solve(int input) {

    for (it = prime.begin(); it != prime.end(); it++) {
        int cnt = 0, tmp = *it;
        while (!(input % tmp)) {
            cnt++;
            input /= tmp;
        }
        if (cnt)
            printf("%d %d\n", tmp, cnt);
    }
    if (input != 1)
        printf("%d 1\n", input);
}

int main() {
    prime_num();
    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        int t;
        cin >> t;
        solve(t);
    }

    return 0;
}
