#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        char buf[9];
        scanf("%s", buf);
        int j = i % 2;
        for (j; j < 8; j += 2) {
            if (buf[j] == 'F')
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
