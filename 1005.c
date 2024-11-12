// https://judge.beecrowd.com/en/problems/view/1005
#include <stdio.h>

int main() {

    double A, B;
    scanf("%lf%*c%lf%*c", &A, &B);
    double Mp = (A * 3.5 + B * 7.5)/(3.5+7.5);
    printf("MEDIA = %.5lf\n", Mp);
    return 0;
}