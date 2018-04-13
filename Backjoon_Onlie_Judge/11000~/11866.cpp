#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
	int max, iter;
	cin >> max >> iter;
	
	int arr[max];
	bool visit[max];
	for(int i = 0; i < max; i++) {
		arr[i] = i+1;
		visit[i] = false;
	}
	int temp = iter-1;
	cout << '<' << arr[temp];
	visit[temp] = true;
	for(int i = 1; i < max; i++) {
		for(int j = 0; j < iter; j++) {
			temp++;
			temp %= max;
			while(visit[temp] != false) {
				temp++;
				temp %= max;
			}
		}
		cout << ", " << arr[temp];
		visit[temp] = true;
	}
	cout << ">\n";
	
	return 0;
}
