#include <iostream>
#include <map>

using namespace std;

map<long long, long long> dp;

long long p, q;
long long func(long long n) {
    if (n == 0)
        return 1;
    else if (dp[n])
        return dp[n];

    return dp[n] = func(n / p) + func(n / q);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n >> p >> q;
    cout << func(n) << '\n';

    return 0;
}
