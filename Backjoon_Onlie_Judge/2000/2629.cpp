#include <stdio.h>

//int arr[30][15000];
// 배열의 인덱스를 1부터 시작하는걸로 바꿈

int arr[31][30001];
// 추는 30개 최대무게는 15000
// 30000으로 하는건 왼쪽에도 무게를 올리니까

int numWeight;
int weight[31];
int numBead;
int bead[8]; // 인덱스를 1부터 세기 위해서 8로 정의

void dp(int n, int k) {
    int i, j;
    arr[0][15000] = 1;
    for (i = 1; i < n + 1; i++) {
        for (j = 1; j < 30001; j++) {
            int plus = j + weight[i];
            int nothing = j;
            int minus = j - weight[i];
            if (arr[i - 1][j] == 1) {
                arr[i][plus] = 1;
                arr[i][nothing] = 1;
                arr[i][minus] = 1;
            }
        }
    }
}

int main(int argc, char **argv) {
    int i;

    scanf(" %d", &numWeight);
    for (i = 1; i < numWeight + 1; i++) {
        scanf(" %d", &weight[i]);
    }
    scanf(" %d", &numBead);
    for (i = 0; i < numBead; i++) {
        scanf(" %d", &bead[i]);
    }

    dp(numWeight, bead[0] + 15000);

    for (i = 0; i < numBead; i++) {
        if (bead[i] > 15000)
            printf("N ");
        else if (arr[numWeight][bead[i] + 15000] == 1)
            printf("Y ");
        else
            printf("N ");
    }

    return 0;
}
