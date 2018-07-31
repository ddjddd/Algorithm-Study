#include <iostream>
#include <queue>

using namespace std;

int max_n = 100000;

int main () {
	int arr[max_n+1] = {0, };
	int a, b;
	cin >> a >> b;
	queue<int> q;
	
	q.push(a);
	arr[a] = 1;
	while(!q.empty()) {
		int cur = q.front();
		q.pop();
		
		if(cur == b) {
			cout << --arr[b] << endl;
			break;
		}
		
		if(cur+1 <= max_n && !arr[cur+1]) {
			q.push(cur+1);
			arr[cur+1] = arr[cur]+1;
		}
		if(cur-1 >= 0 && !arr[cur-1]) {
			q.push(cur-1);
			arr[cur-1] = arr[cur]+1;
		}
		if(cur*2 <= max_n && !arr[cur*2]) {
			q.push(cur*2);
			arr[cur*2] = arr[cur]+1;
		}
	}
	
	return 0;
}
