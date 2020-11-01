#include <stdio.h>

int main(){

    int num, qtdhora;
    double valhora, sal;
    sal = 0;
    scanf("%d", &num);
    scanf("%d", &qtdhora);
    scanf("%lf", &valhora);
    sal = qtdhora * valhora;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", sal);
    return 0;
}
