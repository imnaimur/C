#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lucky_number, given_number;
    time_t t;

    srand((unsigned)time(&t));
    lucky_number = rand () % 10 + 1;

    printf("Enter Your Number- ");
    scanf("%d", &given_number);

    if(given_number == lucky_number){
        printf("You Win !!!\n");
    }else{
        printf("You Lose, Lucky Number was %d\n",lucky_number);
    }
    return 0;
}