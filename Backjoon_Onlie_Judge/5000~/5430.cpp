#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int tC;
	cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		string func, arr;
		int len;
		deque<int> q;
		cin >> func >> len >> arr;
		if(len > 0) {
			int arr_len = arr.length();
			int tmp = 0;
			for(int i = 0; i < arr_len; i++) {
				if(arr[i] >= '0' && arr[i] <= '9') {
					tmp *= 10;
					tmp += arr[i]-'0';
				}
				else if(arr[i] == ',' || arr[i] == ']') {
					q.push_back(tmp);
					tmp = 0;
				}
			}
		}
		
		int func_len = func.length();
		bool flag = true, cond = false;
		for(int i = 0; i < func_len; i++) {
			if(func[i] == 'R') flag = !flag;
			else if(func[i] == 'D'){
				if(q.empty()) {
					cond = true;
					break;
				}
				if(flag) q.pop_front();
				else q.pop_back();
			}
		}
		
		if(!cond) {
			int q_len = q.size();
			if(q.empty()) {
				cout << "[]\n";
			}
			else if(flag) {
				cout << '[' << q.front();
				q.pop_front();
				for(int i = 1; i < q_len; i++) {
					cout << ',' << q.front();
					q.pop_front();
				}
				cout << "]\n";
			}
			else {
				cout << '[' << q.back();
				q.pop_back();
				for(int i = 1; i < q_len; i++) {
					cout << ',' << q.back();
					q.pop_back();
				}
				cout << "]\n";
			}
		}
		else {
			cout << "error\n";
		}
		
	}
	
	return 0;
}
