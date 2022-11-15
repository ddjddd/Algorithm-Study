#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long ret;
    if (v[2] - v[1] == v[1] - v[0])
        ret = v[n - 1] + (v[1] - v[0]);
    else
        ret = v[n - 1] * (v[1] / v[0]);
    cout << ret << endl;

    return 0;
}