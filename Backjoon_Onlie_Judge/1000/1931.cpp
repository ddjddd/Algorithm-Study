#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> pp;

bool compare(pp a, pp b) {
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main() {
    int num;
    cin >> num;
    vector<pair<int, int>> v;
    for (int i = 0; i < num; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), compare);

    int count = 1;
    int tend = v[0].second;
    for (int i = 1; i < num; i++) {
        if (v[i].first >= tend) {
            count++;
            tend = v[i].second;
        }
    }

    cout << count << endl;

    return 0;
}
