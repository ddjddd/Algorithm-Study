#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int arr[51];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a = 1, b = 1;
    int am = arr[0], bm = arr[n - 1];
    for (int i = 0; i < n; i++) {
        if (arr[i] > am) {
            a++;
            am = arr[i];
        }
        if (arr[n - 1 - i] > bm) {
            b++;
            bm = arr[n - 1 - i];
        }
    }
    cout << a << endl << b << endl;


    return 0;
}