#include <iostream>
#include <stack>

using namespace std;

struct node {
    int sum;
    int op[4];
};

node make_node(int sum, int op[4]) {
    node ret;
    ret.sum = sum;
    for (int i = 0; i < 4; i++) {
        ret.op[i] = op[i];
    }
    return ret;
}

int get_sum(int op[4]) {
    return op[0] + op[1] + op[2] + op[3];
}

int n, ans_max = -1000000001, ans_min = 1000000001;
int arr[11];
stack<node> s;

void dfs() {
    while (!s.empty()) {
        node tmp = s.top();
        s.pop();

        int tsum = tmp.sum;
        int top[4];
        for (int i = 0; i < 4; i++) {
            top[i] = tmp.op[i];
        }

        int si = get_sum(top);

        if (si == 0) {
            ans_max = max(ans_max, tsum);
            ans_min = min(ans_min, tsum);
        }

        else {
            for (int i = 0; i < 4; i++) {
                if (tmp.op[i]) {
                    top[i]--;
                    int x = tsum;
                    if (i == 0) {
                        tsum += arr[n - si];
                    } else if (i == 1) {
                        tsum -= arr[n - si];
                    } else if (i == 2) {
                        tsum *= arr[n - si];
                    } else if (i == 3) {
                        tsum /= arr[n - si];
                    }
                    s.push(make_node(tsum, top));
                    tsum = x;
                    top[i]++;
                }
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int op[4];
    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }
    s.push(make_node(arr[0], op));
    dfs();

    cout << ans_max << endl
         << ans_min << endl;

    return 0;
}
