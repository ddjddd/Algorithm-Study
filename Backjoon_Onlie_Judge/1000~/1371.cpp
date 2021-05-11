#include <string>
#include <iostream>

using namespace std;

int alphabet[26] = { 0, };

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while (cin >> s) {
        for (auto& c : s)
            if (c >= 'a' && c <= 'z')
                alphabet[c - 'a']++;
        s.clear();
    }
    int m = 0;
    for (int i = 0; i < 26; i++) m = max(m, alphabet[i]);
    for (int i = 0; i < 26; i++) if (alphabet[i] == m) cout << (char)('a' + i);
    cout << endl;

    return 0;
}