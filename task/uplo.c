#include <stdio.h>
int main()
{
    char a;
    printf("input a character :");
    scanf("%c", &a);
    if(a>=48 && a<=57){
        printf(" %c Is a Number\n",a);
    } else if(a>=65 && a<=90){
        printf(" %c is an Uppercase Character\n",a);
    }
    else if(a>=97 && a<=122){
        printf(" %c is a Lower Character\n",a);
    }else{
        printf(" %c is a Special character\n",a);
    }
    return 0;
}