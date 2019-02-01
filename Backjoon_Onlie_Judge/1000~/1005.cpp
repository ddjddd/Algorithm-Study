#include <iostream>

using namespace std;

int n;
int dp[1001], arr[1001];
bool tab[1001][1001];

int reverseDFS(int end) {
    if(dp[end] != -1) {
        return dp[end];
    }
    int m = 0, res = 0, ret;
    for(int i = 1; i <= n; i++) {
        if(tab[i][end]) {
            res = reverseDFS(i);
            m = max(m, res);
        }
    }
    ret = arr[end] + m;
    dp[end] = max(dp[end], ret);
    
    return ret;
}

int main () {
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		int m;
        cin >> n >> m;
        
		for(int i = 1; i <= n; i++) {
			cin >> arr[i];
			dp[i] = -1; // 테스트 케이스에 dp 0인 경우 있는듯
						// 개오바임.... 
		}
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                tab[i][j] = false;
            }
        }
        
		for(int tt = 0; tt < m; tt++) {
			int a, b;
			cin >> a >> b;
			tab[a][b] = true;
		}
        
		int ret;
        cin >> ret;
		cout << reverseDFS(ret) << '\n';
	}
	return 0;
}
