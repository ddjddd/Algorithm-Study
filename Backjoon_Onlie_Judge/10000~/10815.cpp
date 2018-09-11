#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
int main () {
	int n;
	cin >> n;
	int* arr = new int[n];
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int t;
        scanf("%d", &t);
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		int target;
        scanf("%d", &target);
		int start = 0, end = n-1;
		int mid = (start+end) / 2;
		bool ex = false;
		while(end >= start) {
			if(v[mid] == target){
				ex = true; break;
			}
			else if(v[mid] <= target)
				start = mid+1;
			else end = mid-1;
			mid = (start+end) / 2;
		}
		ex = ex==1?1:0;
        printf("%d ", ex);
	} 
	cout << endl;


	return 0;
}
