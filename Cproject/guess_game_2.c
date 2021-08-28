#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    time_t t;
    int ln,cn;
    srand((unsigned)time(&t));
    ln= rand() % 10 + 1;

    while(true){
        printf("Enter choosen number: ");
        scanf("%d", &cn);

        if (cn == ln){
            printf("Congratulation you are winner!!!\n");
            break;
        }
    }

    return 0;
}