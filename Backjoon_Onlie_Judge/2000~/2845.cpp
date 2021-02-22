#include <iostream>
using namespace std;
int main() {
    int a, b, sum;
    cin >> a >> b;
    sum = a*b;
    for(int i = 0; i < 5;i++) {
        int tmp; cin >> tmp;
        cout << tmp-sum << ' ';
    }
    return 0;
}