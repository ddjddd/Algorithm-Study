#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0;
    string a, b;
    cin >> a >> b;
    vector<int> buf(26, 0);
    for (auto &it : a)
        buf[it - 'a']++;
    for (auto &it : b)
        buf[it - 'a']--;
    for (auto &it : buf)
        if (it != 0)
            ans += it > 0 ? it : -it;
    cout << ans << endl;

    return 0;
}