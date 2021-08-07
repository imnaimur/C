#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a,b;

    printf("Input two number\n");
    scanf("%d %d", &a,&b);

    printf("A=%d, B=%d\n",a,b);

    bool gr=a>b;
    printf("A is greater than B:%d\n",gr);

    bool ls=a<b;
    printf("A is less than B:%d\n",ls);

    bool eq= a==b;
    printf("A is equal to B:%d\n",eq);

    bool eqn= a!=b;
    printf("A is equal not B:%d\n",eqn);

    bool ge= a>=b;
    printf("A is Greater than equal B:%d\n",ge);

    bool le= a<=b;
    printf("A is less than equal B:%d\n",le);

    return 0;
    }