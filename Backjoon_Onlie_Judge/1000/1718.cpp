#include <cstring>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, k;
    getline(cin, s);
    getline(cin, k);

    int len = s.length();
    int klen = k.length();

    int idx = 0;
    while (idx < len) {
        if (s[idx] != ' ') {
            s[idx] -= k[idx % klen] - 'a' + 1;
            if (s[idx] < 'a')
                s[idx] += 'z' - 'a' + 1;
        }
        idx++;
    }
    cout << s << endl;

    return 0;
}