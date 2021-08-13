#include <stdio.h>
int main()
{
int a, b, c;
printf("calculator activated\n");
printf("for Summation operation use 0 between two number,similarly 1 for subtrack, 2 for multiply and 3 for divition\n");
printf("please enter number:");
scanf("%d%d%d", &a, &c, &b);
switch(c)
{
    case 0:
        printf("%d + %d = %d",a, b, a+b);
    break;
    case 1:
        printf("%d - %d = %d",a, b, a-b);
    break;
    case 2:
        printf("%d * %d = %d",a, b, a*b);
    break;
    case 3:
        printf("%d / %d = %d",a, b, a/b);
    break;
    default:
    printf("Invalid Input\n");
}
return 0;
}
