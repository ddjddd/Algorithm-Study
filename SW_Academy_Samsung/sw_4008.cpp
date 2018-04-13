#include <iostream>
#include <cstdio>
#include <cmath>
#include <queue>

using namespace std;

typedef struct Node {
	int val;
	int id;
	int op[4];
}node;


int arr[12];

int operation(int input, int oper, int input2){
	int ret;
	if(oper == 0) ret = input + input2;
	else if(oper == 1) ret = input - input2;
	else if(oper == 2) ret = input * input2;
	else if (oper == 3) ret = input / input2;
	return ret;
}

int main () {
	int cases;
	cin >> cases;
	for(int ppp = 0; ppp < cases; ppp++) {
		int M = 0;
		cin >> M;
		int oper[4];
		for(int i = 0; i < 4; i++) {
			cin >> oper[i];
		}
		for(int i = 0; i < M; i++) {
			cin >> arr[i];
		}
		queue <node> q;
		node init;
		init.id = 0;
		init.val = arr[0];
		for(int i = 0; i < 4; i++) {
			init.op[i] = oper[i];
		}
		int a = 1000000000, b = -1000000000;
		q.push(init);
		while (!q.empty()) {
			node tmp = q.front();
			q.pop();
			if(!tmp.op[0] && !tmp.op[1] && !tmp.op[2] && !tmp.op[3]) {
				a = min(a, tmp.val);
				b = max(b, tmp.val);
			}
			else {
				for(int i = 0; i < 4; i++) {
					if(tmp.op[i]) {
						node nNode;
						nNode.id = tmp.id + 1;
						nNode.val = operation(tmp.val, i, arr[nNode.id]);
						for(int j = 0; j < 4; j++) {
							nNode.op[j] = tmp.op[j];
						}
						nNode.op[i]--;
						q.push(nNode);
					}
				}
			}			
		}
		
		int ret = b - a;
		printf("#%d %d\n", ppp+1, ret);
	}	
	return 0;
}
