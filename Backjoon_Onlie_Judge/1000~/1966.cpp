#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main () {
	int num;
	scanf("%d", &num);
	
	for(int i = 0; i < num; i++) {
		int m, n;
		scanf("%d %d", &n, &m);
		queue <pair <int, int> > printQ;
		vector <int> arr;
		for(int j = 0; j < n; j++) {
			int t;
			scanf("%d", &t);
			printQ.push(make_pair(t, j));
			arr.push_back(t);
		}
		
		sort(arr.begin(), arr.end(), greater<int>());
		
		int j = 0;
		while (printQ.empty() == false) {
			pair<int, int>  t = printQ.front();
			int t1 = t.first, t2 = t.second;
			printQ.pop();
			if(t1 == arr[j]) {
				if (t2 == m) {
					printf("%d\n", j+1);
				}
				j++;
			}
			else {
				printQ.push(make_pair(t1, t2));
			}
		}
	}
	
	return 0;
}
