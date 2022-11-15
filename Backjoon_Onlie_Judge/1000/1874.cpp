#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int stack[MAX];
int top = -1;

int main() {
    int max;
    scanf("%d", &max);

    int *arr = (int *)malloc(sizeof(int) * max);

    int i = 0, curr = 1;
    stack[++top] = curr;

    for (; i < max; i++) {
        int tmp = 0;
        scanf("%d", &tmp);
        arr[i] = tmp;
    }

    int t = 1;
    for (i = 0; i < max; i++) {
        if (arr[i] > stack[top]) {
            int j = 0;
            int bound = arr[i] - curr;
            for (j; j < bound; j++) {
                stack[++top] = ++curr;
                //		printf("+\n");
            }
            top--;
            //	printf("-\n");
        } else if (arr[i] != stack[top]) {
            t = 0;
            //	printf("NO\n");
            //	return 0;
        } else {
            top--;
            //	printf("-\n");
        }
    }

    if (t == 0) {
        printf("NO\n");
        return 0;
    }

    curr = 0;
    top = -1;
    stack[++top] = curr;
    for (i = 0; i < max; i++) {
        if (arr[i] > stack[top]) {
            int j = 0;
            int bound = arr[i] - curr;
            for (j; j < bound; j++) {
                stack[++top] = ++curr;
                printf("+\n");
            }
            top--;
            printf("-\n");
        } else if (arr[i] != stack[top]) {
            printf("NO\n");
            return 0;
        } else {
            top--;
            printf("-\n");
        }
    }
    return 0;
}
