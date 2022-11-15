#include <iostream>

using namespace std;

void star(int input, int k) {
    for (int i = 0; i < k; i++)
        cout << ' ';
    for (int i = 0; i < 2 * input + 1; i++)
        cout << '*';
    cout << endl;
    if (input == 0)
        return;
    star(input - 1, k + 1);
}

int main() {
    int input;

    cin >> input;
    star(input - 1, 0);
    return 0;
}
