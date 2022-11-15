#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int max = 0, rt = 0;
    for (int i = 1; i <= 9; i++) {
        int t;
        cin >> t;
        if (t > max) {
            rt = i;
            max = t;
        }
    }
    cout << max << '\n'
         << rt << '\n';
}
