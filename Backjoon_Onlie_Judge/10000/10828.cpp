#include <iostream>

#define MAX 10001

int stack[MAX], top = -1;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int inst;
    cin >> inst;
    char temp[6];
    for (int i = 0; i < inst; i++) {
        cin >> temp;

        if (temp[0] == 'p' && temp[1] == 'u') {
            cin >> stack[++top];
        } else if (temp[0] == 'p' && temp[1] == 'o') {
            if (top != -1)
                cout << stack[top--] << '\n';
            else
                cout << -1 << '\n';
        } else if (temp[0] == 's' && temp[1] == 'i') {
            cout << top + 1 << '\n';
        } else if (temp[0] == 'e' && temp[1] == 'm') {
            if (top == -1)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        } else if (temp[0] == 't' && temp[1] == 'o') {
            if (top != -1)
                cout << stack[top] << '\n';
            else
                cout << -1 << '\n';
        }
    }
    return 0;
}
