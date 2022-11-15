#include <cstdio>
#include <iostream>

using namespace std;

typedef unsigned long long ll;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    ll a, b, g;
    cin >> a >> b;
    g = gcd(a, b);
    for (ll i = 0; i < g; i++) {
        cout << '1';
    }
}
