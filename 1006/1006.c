#include <stdio.h>

int main(){

    double a,b,c,media;
    media = 0;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    media = ((a*2.0)+ (b*3.0) + (c*5.0))/10.0;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}
