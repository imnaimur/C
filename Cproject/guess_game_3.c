#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main(){
int ln,cn,chance=3;
time_t t;
bool loose=true;
srand((unsigned)time(&t));
ln=rand() % 10  ;
while(chance  > 0){
    printf("Enter your choosen number(%d): ", chance);
    scanf("%d", &cn);
    if(cn==ln){
        printf("Congratulation you have won\n");
        loose=false;
        break;
        
    }
    chance--;
}
        if(loose){
        printf("You loose lucky number was %d\n",ln);
        }
return 0;
}