#include <iostream>

using namespace std;

void swap(int* arr, int left, int right){
    int tmp = *(arr+left);
    *(arr+left) = *(arr+right);
    *(arr+right) = tmp;
}

void qsort(int* arr, int start, int end) {
    int pivot = arr[start];
    int left = start+1, right = end;
    if (start >= end) return;
    
    while(true) {
        while(pivot >= arr[left]) left++;
        while(pivot < arr[right]) right--;
        if(left > right) {
            break;
        }
        swap(arr, left, right);
    }
	swap(arr, start, right);
    qsort(arr, start, right-1);
    qsort(arr, right+1, end);
}

int main () {
    int tC; cin>>tC;
    for(int tc = 1; tc <= tC; tc++) {
    	int num; cin >> num;
        int arr[num];
        for(int i = 0; i < num; i++) scanf("%d", &arr[i]);
        qsort(arr, 0, num-1);
        printf("#%d ", tc);
        for(int i = 0; i < num; i++) printf("%d ", arr[i]);
        printf("\n");
    }   
    return 0;
}
