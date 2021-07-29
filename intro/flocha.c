#include <stdio.h>
int main()
{
    printf("Float\n");
    //Float-%f
    float a=12.43f;
    printf("Float- %.2f\n",a);

    //Double-%ld
    double b=234.87;
    printf("Double- %.2lf\n", b);

    //Long Double-%lld
    long double c=43876.76;
    printf("Long double- %.2Lf\n", c);

    printf("Character\n");
    
    //character
    char d= 'A';
    printf("Character- %c\n", d);

    //decimal value of chaeacrer accordung to ASCII
    char e= 'B';
    printf("decimal value of B is- %d\n", e);
    return 0;
}