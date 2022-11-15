#include <iostream>

using namespace std;

int dic[10] = { 8, 5, 4, 9, 1, 7, 6, 3, 2, 0 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;

    int k = 0;
    while (k <= b - a) {
        for (int i = 0; i < 10 && k <= b - a; i++) {
            int t = dic[i];
            if (t >= a && t <= b) {
                cout << t;
                k++;
                if (!(k % 10) || k == b - a + 1)
                    cout << endl;
                else
                    cout << ' ';
            }
            if (k > b - a)
                break;
            for (int j = 0; j < 10 && k <= b - a; j++) {
                int t = dic[i] * 10 + dic[j];
                if (t >= a && t <= b) {
                    cout << t;
                    k++;
                    if (!(k % 10) || k == b - a + 1)
                        cout << endl;
                    else
                        cout << ' ';
                }
            }
        }
    }

    return 0;
}
