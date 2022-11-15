#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> m;
    int a, b;
    cin >> a >> b;
    string input;
    for (int i = 0; i < a; i++) {
        cin >> input;
        m.insert({ input, i });
    }
    vector<string> ans;
    for (int i = 0; i < b; i++) {
        cin >> input;
        if (m.count(input)) {
            ans.push_back(input);
        }
    }

    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (auto &it : ans) {
        cout << it << endl;
    }

    return 0;
}