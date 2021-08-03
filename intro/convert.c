#include <stdio.h>
int main()
{
    char ch='N';
    int r= 100+ch; //automatically converted 
    printf("the value of N=%d\n", ch);
    printf("the value of ch: %c %d\n", ch, ch);
    printf("char+dec:%d\n", r);
    float a=3.5f, b=4.2f, c=2.5f;
    int sum=a+b+c;
    printf("Total (withot conversation):%d\n", sum);
    int sum2=(int)a+(int)b+(int)c; //compiler can't convert everything automatically
    printf("with conversation:%d\n", sum2);
    return 0;
}