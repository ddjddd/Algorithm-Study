#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int n, m;
vector <int> tab[10001];
bool* visit;
int* arr;
int mm;

void dfs(int input) {
	arr[input]++;
	mm = max(mm, arr[input]);
	
	for(int i = 0; i < tab[input].size(); i++) {
		int nn = tab[input][i];
		
		if(!visit[nn]) {
			visit[nn] = true;
			dfs(nn);
		}
	}
}

int main () {
	cin >> n >> m;
	
	
	arr = new int[n+1]();
	
	for(int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		tab[a].push_back(b);
	}
	
	for(int i = 1; i <= n; i++) {
		visit = new bool[n+1]();
		visit[i] = true;
		dfs(i);
		delete(visit);
	}
	
	for(int i = 1; i <= n; i++) {
		if(arr[i] == mm) cout << i << ' ';
	}
	cout << endl;
	
	return 0;
}
