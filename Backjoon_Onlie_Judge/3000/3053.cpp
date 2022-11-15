#include <cstdio>
#include <iostream>

int main() {
    int input;
    scanf("%d", &input);

    double PI = 3.14159265358979;
    double X = 2.0;

    printf("%.6lf\n%.6lf\n", input * input * PI, X * input * input);
    return 0;
}
