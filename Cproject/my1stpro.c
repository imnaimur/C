#include <stdio.h>
int main()
{
    float a, b, res;

     printf("Please Input two number: ");

     scanf("%f %f", &a, &b);

     res=a+b;
     printf("%f+%f=%f\n", a, b, res);
     printf("Ans=%f\n", res);

     res=a-b;
     printf("%f-%f=%f\n", a, b, res);
     printf("Ans=%f\n", res);

     res=a*b;
     printf("%f*%f=%f\n", a, b, res);
     printf("Ans=%f\n", res);

     res=a/b;
     printf("%f/%f=%f\n", a, b,res);
     printf("Ans=%f\n", res);

     printf("a=%f b=%f\n", a, b);

    return 0;
     }