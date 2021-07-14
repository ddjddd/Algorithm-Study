#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue <int> pq;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int tmp, ans; cin >> tmp;

        if(tmp == 0) {
            if(pq.empty()) ans = 0;
            else ans = -pq.top(), pq.pop();
            cout << ans << '\n';
        }
        else {
            pq.push(-tmp);
        }
    }

    return 0;
}