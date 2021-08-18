#include <stdio.h>

int main ()
{
    int year;
    int leapyear=0;
    printf("Enter Year- ");
    scanf("%d",&year);
    if (((year % 4==0) && year % 100!= 0) || ((year % 4 ==0) && year %400 ==0)){
        leapyear=1;
    }
    if(leapyear){
        printf("%d is a Leap Year\n",year);
    }else{
        printf("%d is not a Leap Year\n",year);
    }
return 0;
}