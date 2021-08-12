#include <stdio.h>
int main()
{
    // int naimur=21,  rezaur=20;
    
    // if(naimur>rezaur){
    //     printf("Naimur is elder\n");
    // }else if(rezaur>naimur){
    //     printf("Rezaur is elder\n");
    // }else {
    //     printf("both are equal\n");
    // }
    char color_code;
    printf("Enter color code:");
    scanf("%c", &color_code);
    
    if(color_code=='R'){
        printf("It is RED\n");
    }else if(color_code=='G'){
        printf("It is GREEN\n");
    }else if(color_code=='B'){
        printf("It is BLUE\n");
    }else{
        printf("Wrong color code\n");
    }
    return 0;
}