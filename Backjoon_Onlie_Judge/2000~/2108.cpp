#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n = 0;
vector<int> v;

int arr[8007] = {0, };
int tsum = 0;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    cin >> n;
    for(int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        arr[tmp+4000]++;
        tsum += tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    
    double tavg = (double)tsum / (double) n;
    int avg = tavg > 0 ? (int)(tavg+0.5) : (int)(tavg-0.5);

    int tmin = 0, tans = 0;
    bool flag = false;
    for(int i = 0; i < 8001; i++) {
        if(arr[i] == tmin) {
            if(!flag) {
                flag = true;
                tans = i;
            }
        }
        if(arr[i] > tmin) {
            flag = false;
            tans = i;
            tmin = arr[i];
        }
    }

    cout << avg << endl;
    cout << v[n/2] << endl;
    cout << tans-4000 << endl;
    cout << v[n-1] - v[0] << endl;
    
    return 0;
}