#include <iostream>
#include <cstring>

using namespace std;

int l, c;
char* arr;

void swap(char* a, char* b){
	char t = *b;
	*a = *b;
	*b = t;
}

void qsort(int start, int end) {
	if(start >= end) return;
	
	int left = start+1;
	int right = end;
	char pivot = arr[start];
	
	while(true) {
		while(left < c && pivot >= arr[left]) left++;
		while(right >= 0 && pivot < arr[right]) right--;
		if(left >= right) break;
		swap(arr[left], arr[right]);
	}
	
	swap(arr[start], arr[right]);
	qsort(start, right-1);
	qsort(right+1, end);
}

void rfunc(char* buf, int ls, int index) {
	if(index >= l) {
		int a = 0, b = 0;
		for(int i = 0; i < l; i++) {
			if(buf[i] == 'a' || buf[i] == 'e' || buf[i] == 'i' || buf[i] == 'o' || buf[i] == 'u') {
				a++;
			}
			else b++;
		}
		if(a >= 1 && b >= 2) cout << buf << endl;
		return;	
	}
	for(int i = ls; i < c; i++) {
		buf[index] = arr[i];
		rfunc(buf, i+1, index+1);
	}
}


int main () {
	cin >> l >> c;
	arr = new char[c];
	for(int i = 0; i < c; i++) cin >> arr[i];
	qsort(0, c-1);
	char* buf = new char[l];
	memset(buf, 'a', sizeof(char)*l);
	rfunc(buf, 0, 0);
	
	return 0;
}
