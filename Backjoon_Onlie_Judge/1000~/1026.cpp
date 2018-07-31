#include <iostream>

using namespace std;

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void qsort(int* arr, int start, int end) {
	if(start >= end) return;
	int pivot = arr[start];
	int left = start+1;
	int right = end;
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
	int num; cin >> num;
	int* arr1 = new int[num];
	int* arr2 = new int[num];
	for(int i = 0; i < num; i++) cin >> arr1[i];
	for(int i = 0; i < num; i++) cin >> arr2[i];
	
	qsort(arr1, 0, num-1); qsort(arr2, 0, num-1);
	long long ret = 0;
	for(int i = 0; i < num; i++) {
		ret += (long long)arr1[i]*(long long)arr2[num-i-1];
	}
	cout << ret << endl;
	return 0;
}
