#include <stdio.h>
#include <string.h>

int main () {
	int inst;
	scanf("%d", &inst);
	int queue[10000];
	int front = -1, rear = -1;
	for(int i = 0; i < inst; i++) {
		char ins[6];
		scanf("%s", ins);
		if(!strcmp(ins, "push")){
			int input;
			scanf("%d", &input);
			queue[++rear] = input;
		}
		else if(!strcmp(ins, "pop")){
			if(front != rear) {
				printf("%d\n", queue[++front]);
			}
			else {
				printf("-1\n");
			}
		}
		else if(!strcmp(ins, "size")){
			printf("%d\n", rear - front);
		}
		else if(!strcmp(ins, "empty")){
			if(front != rear) {
				printf("0\n");
			}
			else {
				printf("1\n");
			}
		}
		else if(!strcmp(ins, "front")){
			if(front != rear) {
				printf("%d\n", queue[front+1]);
			}
			else {
				printf("-1\n");
			}
		}
		else if(!strcmp(ins, "back")){
			if(front != rear) {
				printf("%d\n", queue[rear]);
			}
			else {
				printf("-1\n");
			}
		}
	}
	return 0;
}