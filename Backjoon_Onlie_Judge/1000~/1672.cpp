#include <iostream>

using namespace std;

char cvt(char a, char b) {
    switch (a) {
    case 'A':
    switch (b) {
    case 'A': return 'A';
    case 'G': return 'C';
    case 'C': return 'A';
    case 'T': return 'G';
    }
    case 'G':
    switch (b) {
    case 'A': return 'C';
    case 'G': return 'G';
    case 'C': return 'T';
    case 'T': return 'A';
    }
    case 'C':
    switch (b) {
    case 'A': return 'A';
    case 'G': return 'T';
    case 'C': return 'C';
    case 'T': return 'G';
    }
    case 'T':
    switch (b) {
    case 'A': return 'G';
    case 'G': return 'A';
    case 'C': return 'G';
    case 'T': return 'T';
    }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    char buf[1000001];
    cin >> buf;
    while (n > 1) {
        buf[n - 2] = cvt(buf[n - 2], buf[n - 1]);
        n--;
    }
    cout << buf[0] << endl;

    return 0;
}