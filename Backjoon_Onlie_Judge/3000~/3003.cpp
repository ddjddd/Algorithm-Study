#include <iostream>

using namespace std;

int arr[6] = {1,1,2,2,2,8};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tmp;
    for(int i = 0; i < 6; i++) {
        cin >> tmp;
        cout << arr[i] - tmp << ' ';
    }
    cout << endl;

    return 0;
}