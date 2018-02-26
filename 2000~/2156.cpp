#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
	int size;
	scanf("%d", &size);
	int *arr = (int *)malloc(sizeof(int)*size);
	memset(arr, 0, sizeof(int)*size);
	int *tab = (int *)malloc(sizeof(int)*size*4);
	memset(tab, 0, sizeof(int)*size*4);
	
	int i = 0;
	for(i; i<size; i++) {
		scanf("%d", &arr[i]);
	}
	if(size == 1) {
		printf("%d\n", arr[0]);
	}
	else if(size == 2) {
		printf("%d\n", arr[0]+arr[1]);
	}
	else {
		tab[0] = 0;
        tab[1] = arr[1];
        tab[2] = arr[0];
        tab[3] = arr[0] + arr[1];
		int j = 0;
		for(j = 1; j < size-1; j++) {
			int k = 4*j, b = 4*(j-1);
            tab[k] = max(tab[b],tab[b+2]);
			tab[k+1] = max(tab[b],tab[b+2])+arr[j+1];
			tab[k+2] = max(tab[b+1],tab[b+3]);
            tab[k+3] = tab[b+1]+arr[j+1];
        }
        j--; j *= 4;
		int ret = max(max(max(tab[j], tab[j+1]), tab[j+2]), tab[j+3]);
		printf("%d\n", ret);
	}
	
	return 0;
}
