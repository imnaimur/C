#include <stdio.h>
int main()
{
    int a,b;
    char o;
    printf("calculator started=");
    scanf("%d %c %d",&a, &o, &b);
    if(o=='+'){
        printf("%d + %d =%d\n",a, b, a+b);
    } else if (o=='-'){
        printf("%d - %d =%d\n",a, b, a-b);
    }  else if (o=='*'){
        printf("%d * %d =%d\n",a, b, a*b);
    } else if (o=='/'){
        printf("%d / %d =%d\n",a, b, a/b);
         printf("Remainder:%d / %d =%d\n",a, b, a%b);
        }
return 0;
}