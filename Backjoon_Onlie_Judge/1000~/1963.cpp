#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int size = 10001;

typedef struct Node {
	int a[4];
	int n;
	int t;
}node;

node make_node(int n, int c) {
	node t;
	t.n = n; t.a[0] = n/1000;
	n %= 1000; t.a[1] = n/100;
	n %= 100; t.a[2] = n/10;
	n %= 10; t.a[3] = n;
	
	t.t = c;
	
	return t;
}

int ss(int a[4]) {
	return a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
}

int ss2(int a, int b, int c, int d) {
	return a*1000 + b*100 + c*10 + d;
}

int ss3(int a[4], int i, int t) {
	int ret = 0;
	for(int j = 0; j < 4; j++) {
		ret *= 10;
		if(j == i) {
			ret += t;
		}
		else ret += a[j];
	}
	return ret;
}

int main () {
	bool* arr = new bool[size];
	memset(arr, 0, sizeof(bool)*size);

    for (int i = 2; i < size; i++) {
        if (arr[i] == false) {
            for (int j = i * 2; j < size; j += i) {
                arr[j] = true;
            }
        }
    }
    
    int tC; cin >> tC;
    for(int tc = 1; tc <= tC; tc++) {
    	int a, b; cin >> a >> b;
    	queue <node> q;
    	q.push(make_node(a, 0));
    	
    	bool* visit = new bool[size];
    	memset(visit, 0, sizeof(bool)*size);
    	visit[a] = true;
    	
    	while(!q.empty()) {
    		node t = q.front();
//    		cout << t.n << ' ' << t.t << endl;
			q.pop();
			for(int i = 0; i < 4; i++)	{
				for(int j = 0; j < 10; j++) {
					if(j != t.a[i]) {
						int tmp = ss3(t.a, i, j);
						if(tmp >= 1000) {
							if((!visit[tmp]) && (!arr[tmp])) {
								q.push(make_node(tmp, t.t + 1));
								visit[tmp] = true;
							}
						}
					}
				}
			}
			if(t.n == b) {
				cout << t.t << endl;
				break;
			}
		}
		if(q.empty() && !visit[b]) {
			cout << "impossible\n";
		}
	}
	
	delete(arr);
	
	return 0;
}
