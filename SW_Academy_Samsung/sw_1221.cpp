#include <iostream>
#include <cstring>

using namespace std;

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void qsort(int* arr, int start, int end) {
	if(start >= end) return;
	
	int pivot = arr[start];
	int left = start+1, right = end;
	while(true) {
		while(pivot >= arr[left]) left++;
		while(pivot < arr[right]) right--;
		
		if(left >= right) break;
		swap(arr[left], arr[right]);
	}
	swap(arr[start], arr[right]);
	
	qsort(arr, start, right-1);
	qsort(arr, right+1, end);
}

int main () {
//	freopen("input.txt", "r", stdin);
	int tC; cin >> tC;
	char str[10][4] = {"ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN"};
	for(int tc = 1; tc <= tC; tc++) {
		char d;
		int dummy, num; scanf(" %1c %d %d", &d, &dummy, &num);
		int arr[num];
		for(int i = 0; i < num; i++) {
			char tmp[4] = "000";
			scanf(" %c%c%c", &tmp[0], &tmp[1], &tmp[2]);
			for(int j = 0; j < 10; j++) {
				if(!strncmp(tmp, str[j], 3)) {
					arr[i] = j; break;
				}
			}
		}
		printf("#%d\n", tc);
		qsort(arr, 0, num-1);
		for(int i = 0; i < num; i++) {
			for(int j = 0; j < 10; j++) {
				if(arr[i] == j) {
					printf("%s ", str[j]);
				}
			}
		}
		cout << endl;
	}
	
	return 0;
}
