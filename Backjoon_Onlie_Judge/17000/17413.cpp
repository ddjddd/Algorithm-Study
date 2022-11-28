#include <iostream>
#include <stack>

using namespace std;

stack<char> st;

void flush() {
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);

    bool skip = false;

    for (auto &it : s) {
        if (it == '<') {
            flush();
            skip = true;
            cout << it;
        } else if (it == '>') {
            skip = false;
            cout << it;
        } else if (skip) {
            cout << it;
        } else {
            if (it == ' ') {
                flush();
                cout << it;
            } else {
                st.push(it);
            }
        }
    }
    flush();
    cout << '\n';

    return 0;
}