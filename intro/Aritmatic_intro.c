#include <stdio.h>
int main(){
    int a=30,b=7;
     int s=a+b,p=a-b,d=a*b,e=a/b;
     printf("additional:%d\n", s);
     printf("Subtract:%d\n", p);
     printf("multiply:%d\n", d);
     printf("Divition:%d\n", e);
     printf("remainder:%d\n",a%b);//here % work for leftover
   //printf("%d+%d=%d\n", a, b ,a+b);(Older way)
    return 0;
}