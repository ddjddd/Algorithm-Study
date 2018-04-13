#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main () {
	int inst;
	cin >> inst;
	deque <int> q;
	for(int i = 0; i < inst; i++) {
		string buf;
		cin >> buf;
		if(buf == "push_back") {
			int tmp;
			cin >> tmp;
			q.push_back(tmp);
		}
		else if(buf == "push_front") {
			int tmp;
			cin >> tmp;
			q.push_front(tmp);
		}
		else if(buf == "pop_front") {
			if(!q.empty()) {
				cout << q.front() << endl;
				q.pop_front();
			}
			else
				cout << "-1" << endl;
		}
		else if(buf == "pop_back") {
			if(!q.empty()){
				cout << q.back() << endl;
				q.pop_back();
			}
			else
				cout << "-1" << endl;
		}
		else if(buf == "size") {
			int tmp = q.size();
			cout << tmp << endl;
		}
		else if(buf == "empty") {
			cout << q.empty() << endl;
		}
		else if(buf == "front") {
			if(!q.empty())
				cout << q.front() << endl;
			else
				cout << "-1" << endl;
		}
		else if(buf == "back") {
			if(!q.empty())
				cout << q.back() << endl;
			else
				cout << "-1" << endl;
		}
	}	
	return 0;
}
