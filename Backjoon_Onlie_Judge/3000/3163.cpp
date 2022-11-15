#include <algorithm>
#include <deque>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

typedef pair<int, int> p;

int compare(p p1, p p2) {
    return p1.first < p2.first;
}

int main() {
    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        int n, l, k;
        vector<p> v, out;
        deque<p> init;

        cin >> n >> l >> k;

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            if (b >= 0)
                a = l - a;
            v.push_back(make_pair(a, b));
            init.push_back(make_pair(a, b));
        }
        sort(v.begin(), v.end(), compare); // 원래 순서

        for (int i = 0; i < n; i++) {
            if (i + 1 < n && v[i].first == v[i + 1].first) {
                p ta = init.front(), tb = init.back();
                if (ta.second < tb.second) {
                    out.push_back(init.front());
                    out.push_back(init.back());
                } else {
                    out.push_back(init.back());
                    out.push_back(init.front());
                }
                init.pop_back();
                init.pop_front();
                i++;
            } else {
                if (v[i].second > 0) {
                    out.push_back(init.back());
                    init.pop_back();
                } else {
                    out.push_back(init.front());
                    init.pop_front();
                }
            }
        }

        cout << out[k - 1].second << '\n';
    }

    return 0;
}
