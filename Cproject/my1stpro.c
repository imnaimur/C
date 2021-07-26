#include <stdio.h>
int main()
{
    float a, b, res;

     printf("Please Input two number: ");

     scanf("%f %f", &a, &b);

     res=a+b;
     printf("%.2f+%.2f=%.2f\n", a, b, res);
     printf("Ans=%.2f\n", res);

     res=a-b;
     printf("%.2f-%.2f=%.2f\n", a, b, res);
     printf("Ans=%.2f\n", res);

     res=a*b;
     printf("%.2f*%.2f=%.2f\n", a, b, res);
     printf("Ans=%.2f\n", res);

     res=a/b;
     printf("%.2f/%.2f=%.2f\n", a, b,res);
     printf("Ans=%.2f\n", res);

     printf("a=%.2f b=%.2f\n", a, b);

    return 0;
     }