#include <iostream>
#include <vector>

using namespace std;

const double epsilon = 0.00000000001;
typedef pair<int, int> pii;
vector<pii> v;

double area(pii a, pii b, pii c) {
    double ret = a.first * b.second + b.first * c.second + c.first * a.second - a.first * c.second - b.first * a.second - c.first * b.second;
    ret = ret - 0.0 > epsilon ? ret * 0.5 : -ret * 0.5;
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({ a, b });
    }
    int len = v.size();
    double maxA = 0.0f;
    for (auto &i : v)
        for (auto &j : v)
            for (auto &k : v) {
                if (i != j && i != k && j != k)
                    maxA = max(maxA, area(i, j, k));
            }

    printf("%.1f\n", maxA);
    return 0;
}