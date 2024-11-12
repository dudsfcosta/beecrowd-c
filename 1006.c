// https://judge.beecrowd.com/en/problems/view/1006
#include <stdio.h>

int main() {

    double A, B, C;
    scanf("%lf%*c%lf%*c%lf%*c", &A, &B, &C);
    double Mp = (A*2 + B*3 + C*5)/(2 + 3 + 5);
    printf("MEDIA = %.1lf\n", Mp);
    return 0;
}