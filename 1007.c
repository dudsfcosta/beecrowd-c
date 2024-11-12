// https://judge.beecrowd.com/en/problems/view/1007
#include <stdio.h>

int main() {

    int A, B, C, D;
    scanf("%d%*c%d%*c%d%*c%d%*c", &A, &B, &C, &D);
    int diff = A*B - C*D;
    printf("DIFERENCA = %d\n", diff);
    return 0;
}