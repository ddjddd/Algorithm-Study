#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool arr[2001] = {0, };

    int count = 0; cin >> count;
    for(int i = 0; i < count; i++) {
        int tmp = 0; cin >> tmp;
        arr[tmp+1000] = true;
    }

    for(int i = 0; i < 2001; i++) {
        if(arr[i]) cout << i-1000 << ' ';
    }
    cout << '\n';

    return 0;
}
