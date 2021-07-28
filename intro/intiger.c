#include <stdio.h>
int main()
{
//Signed Intiger

//Short
short a= 45;
printf("Im short- %hi\n", a);

//Intiger
int b=10;
printf("Im intiger- %d\n", b);

//Long
long c= 1200l;
printf("Im long- %ld\n", c);

//Long Long
long long d= 1600ll;
printf("Im Long Long- %lli\n", d);

//octal
int o=0765;
printf("Im Octal- %o\n", o);
printf("decimal of octal- %d\n", o);

//hexadecimal
int h=0Xfff;
printf("Im Hexadecimal- %X\n", h);
printf("decimal of hexadecimal- %d\n", h);
return 0;
}