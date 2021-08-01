#include <stdio.h>

int main()
{
    int a;
    printf("please input a number\n");
    scanf("%d", &a);
    if (a>0){
        printf("%d is a positive number\n",a);
    }
    else{
        printf("%d is a negative number\n",a);
    } 
    printf("Alhamdulillah experiment successful\n");   
    return 0;
}