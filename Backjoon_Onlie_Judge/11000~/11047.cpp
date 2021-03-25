#include <iostream>
#include <cstdio>

using namespace std;

void merge(int* arr, int start, int mid, int end) {
	int* buf = new int[end-start+1];
	
	int i = start, j = mid+1, k = start;

	while(i <= mid && j <= end) {
		if(arr[i] < arr[j]) {
			buf[k++] = arr[i++];
		}
		else buf[k++] = arr[j++];
	}
	while(i <= mid) buf[k++] = arr[i++];
	while(j <= end) buf[k++] = arr[j++];
	
	for(int i = start; i <= end; i++) {
		arr[i] = buf[i];
	}
}

void msort(int* arr, int start, int end) {
	int mid = (start + end) / 2;
	if(start < end) {
		msort(arr, start, mid);
		msort(arr, mid+1, end);
		
		merge(arr, start, mid, end);
	}
	else return;
}

int main () {
	int num, k;
	scanf("%d %d", &num, &k);
	int* arr = new int[num];
	for(int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	msort(arr, 0, num-1);
	int ret = 0;
	for(int i = num-1; i >= 0; i--) {
		ret += k / arr[i];
		k %= arr[i];
	}
	cout << ret << endl;
	return 0;
}

