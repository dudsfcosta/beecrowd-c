// https://judge.beecrowd.com/en/problems/view/1009
#include <stdio.h>

int main() {

    char name[15];
    double fixSalary, totalSalary, sale;

    scanf("%s", name);
    scanf("%lf%*c", &fixSalary);
    scanf("%lf%*c", &sale);
    totalSalary = fixSalary + sale*0.15;

    printf("TOTAL = R$ %.2lf\n", totalSalary);
    return 0;
}