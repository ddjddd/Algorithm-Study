#include <iostream>
#include <vector>
#include <utility>
#include <cstdio>
#include <algorithm>

using namespace std;

int table[100][100];
typedef pair <int, int> pos;
typedef pair <int, int> numdi;
typedef pair <pos, numdi> mi;

void func() {
	int n, m, k;
	cin >> n >> m >> k;
	vector <mi> v;
	for (int i = 0; i < k; i++) {
		int x, y, num, di;
		cin >> x >> y >> num >> di;
		v.push_back(make_pair(make_pair(x,y), make_pair(num, di)));
	}

	for(int time = 0; time < m; time++) {
		for(int i = 0; i < v.size(); i++) {
			mi tmp = v[i];
			int dir = tmp.second.second;
			if(dir == 1) {
				v[i].first.first--;
				if (v[i].first.first == 0) {
					v[i].second.second = 2;
					v[i].second.first /= 2;
				}
			}
			else if(dir == 2) {
				v[i].first.first++;
				if (v[i].first.first == n-1) {
					v[i].second.second = 1;
					v[i].second.first /= 2;
				}
			}
			else if(dir == 3) {
				v[i].first.second--;
				if (v[i].first.second == 0) {
					v[i].second.second = 4;
					v[i].second.first /= 2;
				}
			}
			else if(dir == 4) {
				v[i].first.second++;
				if (v[i].first.second == n-1) {
					v[i].second.second = 3;
					v[i].second.first /= 2;
				}
			}			
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++) {
			int tnum = v[i].second.first, tdir = v[i].second.second;
			for(int j = i+1; j < v.size(); j++) {
				if(v[i].first.first == v[j].first.first && v[i].first.second == v[j].first.second) {
					if(tnum < v[j].second.first) {
						v[i].second.second = v[j].second.second;
						tnum = v[j].second.first;
						tdir = v[j].second.second;
					}
					v[i].second.first += v[j].second.first;
				}
			}
		}
		for(int i = 0; i < v.size(); i++) {
			for(int j = i+1; j < v.size(); j++) {
				if(v[i].first.first == v[j].first.first && v[i].first.second == v[j].first.second) {
					v.erase(v.begin()+j);
					j--;
				}
			}
//			printf("%d %d %d %d\n", v[i].first.first, v[i].first.second, v[i].second.first, v[i].second.second);
		}
	}
	
	int sum = 0;
	for(int i = 0; i < v.size(); i++){
		sum += v[i].second.first;
	}
	cout << sum << endl;
	
	
	return;
}

int main () {
	int cases;
	cin >> cases;
	for(int i = 0; i < cases; i++) {
        cout << '#' << i+1 << ' ';
		func();
	}
	return 0;
}
