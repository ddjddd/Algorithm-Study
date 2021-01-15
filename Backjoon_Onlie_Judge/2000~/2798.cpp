#include <iostream>

using namespace std;

int a, b, ans = 0;
int arr[107];

void dfs(int depth, int tsum, int index) {
    if(depth == 3) {
        if(tsum >= ans && tsum <= b) ans = tsum;
        return ;
    }
    else {
        for(int i = index; i < a; i++) {
            dfs(depth+1, tsum+arr[i], i+1);
        }
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    dfs(0, 0, 0);
    cout << ans << endl;
    
    return 0;
}