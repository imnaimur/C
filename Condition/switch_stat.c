#include <stdio.h>
int main()
{
    int day_num;
    printf("Enter a number:");
    scanf("%d",&day_num);
    switch(day_num){
    //     case 0:
    //         printf("Saturday\n");
    //         break;
    //         case 1:
    //         printf("Sunday\n");
    //         break;
    //         case 2:
    //         printf("Monday\n");
    //         break;
    //         case 3:
    //         printf("Tuesday\n");
    //         break;
    //         case 4:
    //         printf("Wednesday\n");
    //         case 5:
    //         printf("Thursday\n");
    //         break;
    //         case 6:
    //         printf("Friday\n");
    //         default:
    //         printf("Invalid Input\n");
    case 0:
    case 6:
        printf("Off day\n");
    break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Working day\n");
    break;
     default:
        printf("Invalid Input\n");
    }
    return 0;
}