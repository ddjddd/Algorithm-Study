#include <iostream>

using namespace std;
typedef pair<int, int> pii;

pii arr[27] = {
    {0, 1}, {0, 2}, {0, 3},
    {1, 1}, {1, 2}, {1, 3},
    {2, 1}, {2, 2}, {2, 3},
    {3, 1}, {3, 2}, {3, 3},
    {4, 1}, {4, 2}, {4, 3},
    {5, 1}, {5, 2}, {5, 3}, {5, 4},
    {6, 1}, {6, 2}, {6, 3},
    {7, 1}, {7, 2}, {7, 3}, {7, 4},
    {8, 1},
};

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int ta, tb; cin >> ta >> tb;
    cin.ignore();
    string s; getline(cin, s);

    int recent = -1, ans = 0;
    for(auto& it : s) {
        char cur = it - 'A';
        if (it == ' ') cur = 26;
        if (it == '\n') break;

        if(cur < 0 || cur > 26) break;
        ans += arr[cur].second * ta;
        if(arr[cur].first == recent && recent != 8) {
            ans += tb;
        }
        recent = arr[cur].first;
    }

    cout << ans << '\n';

    return 0;
}