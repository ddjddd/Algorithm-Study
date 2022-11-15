#include <stdio.h>

int main(int argc, char **argv) {
    int totalCase, testCase, input[1000], i, j, sum, count;
    double avg;

    scanf("%d", &totalCase);
    for (i = 0; i < totalCase; i++) {
        scanf("%d", &testCase);
        for (j = 0; j < testCase; j++) {
            scanf("%d", &input[j]);
            sum += input[j];
            avg = (double)sum / (double)testCase;
        }
        for (j = 0; j < testCase; j++) {
            if ((double)input[j] > avg)
                count++;
        }
        if (testCase == 0) {
            printf("%.3lf%%\n", 0);
        } else
            printf("%.3lf%%\n", (double)count / testCase * 100);
        count = 0;
        avg = 0;
        sum = 0;
        for (j = 0; j < totalCase; j++)
            input[j] = 0;
    }
    return 0;
}
