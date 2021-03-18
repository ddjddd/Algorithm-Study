#include <iostream>
using namespace std;

int main() {
    int n, tmp; cin >> n;
    for (int i = 0; i < n; i++) cin >> tmp;
    cout << (n ? "1.00\n" : "divide by zero\n");
    return 0;
}