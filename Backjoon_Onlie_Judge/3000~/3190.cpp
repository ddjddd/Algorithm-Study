#include <iostream>
#include <deque>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int change_direction(int dir, char a) {
	if(a == 'L') {
		dir = (dir+3)%4;
	}
	else dir = (dir+1)%4;
	return dir;
}

int n, k, l, map[101][101] = {0, };
int la[100];
char ld[100];

int main () {
	cin >> n >> k;
	for(int i = 0; i < k; i++) {
		int ax, ay; 
		cin >> ax >> ay;
		map[ax][ay] = 2; // »ç°ú 2, ¹ì 1 
	}
	cin >> l;
	for(int i = 0; i < l; i++) {
		cin >> la[i] >> ld[i];
	}
	
	int cx = 1, cy = 1, dir = 0;
	int ct = 0, di = 0;
	
	deque<pair<int, int> > q;
	
	q.push_back(make_pair(cx, cy));
	map[1][1] = 1;
	
	while(true) {		
		ct++;
		cx += dx[dir];
		cy += dy[dir];
		
		if(cx < 1 || cx > n || cy < 1 || cy > n) break; // º® 
		if(map[cx][cy] == 1) break; // ¸öÅë
		
		if(map[cx][cy] == 0)  {
			map[q.back().first][q.back().second] = 0;
			q.pop_back();
		}
		
		if(di < l && la[di] == ct) {
			dir = change_direction(dir, ld[di]);
			di++;
		}
		
		q.push_front(make_pair(cx, cy));
		map[cx][cy] = 1;
		
	}
	cout << ct << endl;
	
	return 0;
}
