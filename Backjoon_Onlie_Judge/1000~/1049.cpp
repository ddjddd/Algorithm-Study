// time: 9:35
#include <iostream>

#define MIN(a, b) (a) > (b) ? (b) : (a)

using namespace std;

int n, m;
int setmin = 100000, singlemin = 100000;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a = MIN(b*6, a);
        setmin = MIN(setmin, a);
        singlemin = MIN(singlemin, b);
    }

    int set = n/6;
    int ans = n*singlemin;
    ans = MIN(ans, MIN(set*setmin + (n%6)*singlemin, (set+1)*setmin));

    cout << ans << endl;

	return 0;
}
