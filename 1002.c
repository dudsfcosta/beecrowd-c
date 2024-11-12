// https://judge.beecrowd.com/en/problems/view/1002
#include <math.h>
#include <stdio.h>

int main() {

    double pi = 3.14159;
    double R;
    scanf("%lf", &R);
    double A = pi * pow(R, 2);
    printf("A=%.4lf\n", A);

    return 0;
}