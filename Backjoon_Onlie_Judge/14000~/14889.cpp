#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int n;
int arr[20][20] = {0, };
int ans = 987654321;
bool visit[20] = {0, };

void dfs(int depth, int cur) {
    if(depth == n/2) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(visit[i] && visit[j]) sum += arr[i][j];
                if(!visit[i] && !visit[j]) sum -= arr[i][j];
            }
        }
        sum = sum < 0 ? -sum : sum;
        ans = sum < ans ? sum : ans;
        return;
    }

    for(int i = cur; i < n; i++) {
        visit[i] = true;
        dfs(depth+1, i+1);
        visit[i] = false;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int tmp; cin >> tmp;
            arr[i][j] = tmp;
            if(i > j) arr[j][i] += tmp;
            // sum += tmp;
        }
    }
    
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << arr[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    dfs(0, 0);
    cout << ans << '\n';

    return 0;
}
