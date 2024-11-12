// https://judge.beecrowd.com/en/problems/view/1008
#include <stdio.h>

int main() {

    int num, hrs;
    double amount;
    scanf("%d%*c%d%*c%lf%*c", &num, &hrs, &amount);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", hrs*amount);
    return 0;
}