#include <iostream>

using namespace std;

int main() {
    int tc = 0; cin >> tc;
    for (int i = 0; i < tc; i++) {
        int a; cin >> a;
        for (a; a != 0; a--) printf("=");
        printf("\n");
    }
    return 0;
}