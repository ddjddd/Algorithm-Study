#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int tmp;
    for (int i = 0; i < 5; i++) {
        cin >> tmp;
        sum += tmp;
    }
    cout << sum << endl;
    return 0;
}