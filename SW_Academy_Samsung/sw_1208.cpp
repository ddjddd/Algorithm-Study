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
	int left = start + 1, right = end;
	while (true) {
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
 	int tC = 10;
    for(int tc = 1; tc <= tC; tc++) {
        int num; cin >> num;
        int arr[100];
        for(int i = 0; i < 100; i++) scanf("%d", &arr[i]);
        
        int count = 0;
        qsort(arr, 0, 99);
        while(count < num) {
            arr[0]++; arr[99]--; count++;
            qsort(arr, 0, 99);
            if(arr[99]-arr[0] <= 1) break;
        }
        printf("#%d %d\n", tc, arr[99]-arr[0]);
    }
    return 0;
}



