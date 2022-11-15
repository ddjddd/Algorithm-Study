#include <stdio.h>

//int arr[30][15000];
// �迭�� �ε����� 1���� �����ϴ°ɷ� �ٲ�

int arr[31][30001];
// �ߴ� 30�� �ִ빫�Դ� 15000
// 30000���� �ϴ°� ���ʿ��� ���Ը� �ø��ϱ�

int numWeight;
int weight[31];
int numBead;
int bead[8]; // �ε����� 1���� ���� ���ؼ� 8�� ����

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
