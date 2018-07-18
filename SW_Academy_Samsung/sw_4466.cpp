#include <iostream>

using namespace std;

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void qsort(int* arr, int start, int end) {
	if(start >= end) return ;
	
	int pivot = arr[start];
	int left = start + 1;
	int right = end;
	
	while(true) {
		while(arr[left] >= pivot) left++;
		while(arr[right] < pivot) right--;
		
		if(left >= right) break;
		swap(arr[left], arr[right]);
	}
	swap(arr[start], arr[right]);
	qsort(arr, start, right-1);
	qsort(arr, right+1, end);
}

int main () {
	int tC; scanf("%d", &tC);
	for(int tc = 1; tc <= tC; tc++) {
		int n, k; scanf("%d %d", &n, &k);
		int arr[n];
		for(int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		qsort(arr, 0, n-1);
		int sum = 0;
		for(int i = 0; i < k; i++) sum += arr[i];
		printf("#%d %d\n", tc, sum);
	}
	return 0;
}
