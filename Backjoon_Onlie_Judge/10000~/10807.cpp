#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[201] = { 0 };

    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        int tmp; cin >> tmp;
        arr[tmp+100]++;
    }

    int input; cin >> input;
    cout << arr[input+100] << '\n';

    return 0;
}
