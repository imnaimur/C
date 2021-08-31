#include <stdio.h>
int main(){
    int ly=0,y;
    char ch='C';

    while(ch != 'Q'){
        printf("Enter a Year: ");
        scanf("%d", &y);
        if(((y % 4==0) && y % 100!= 0) || ((y % 4 ==0) && y %400 ==0)){
           ly=1;
        }
        if (ly){
            printf("%d is a Leap year\n",y);
        }else{
            printf("%d is not a Leap Year\n",y);
        }
        printf("Enter 'C' to continue or 'Q' to exit: ");
        scanf(" %c", &ch);
    }
    return 0;
}