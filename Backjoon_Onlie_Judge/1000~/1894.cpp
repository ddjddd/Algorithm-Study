#include <iostream>
#include <cstring>

using namespace std;
typedef pair<double, double> pdd;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pdd a, b, c, d;

    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &a.first, &a.second, &b.first, &b.second, &c.first, &c.second, &d.first, &d.second) != EOF) {
        if (b != c) {
            if (b == d) {
                pdd tmp = d;
                d = c;
                c = tmp;
            }
            else if (a == c) {
                pdd tmp = a;
                a = b;
                b = tmp;
            }
            else if (a == d) {
                pdd tmp = d;
                d = c;
                c = tmp;
                tmp = a;
                a = b;
                b = tmp;
            }
        }

        pdd mid = { (a.first + d.first) / 2.0, (a.second + d.second) / 2.0 };
        pdd ans = { mid.first - (b.first - mid.first), mid.second - (b.second - mid.second) };
        printf("%.3f %.3f\n", ans.first, ans.second);
    }

    return 0;
}