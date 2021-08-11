#include <stdio.h>

int main()
{
//    int naimur=21,  rezaur=26;
//    if(naimur>rezaur){
//        printf("Naimur Is Elder\n");
//    } 
//    else{
//        printf("Rezaur Is Elder\n");
 //  }//(gure fuwar kam) 
//et's try boro fuwar 


int a,b,c;
printf("Put your Result Yes=1 No=0\n");

printf("Have you got 90 Percent + in math?\n");
scanf("%d",&a);
printf("Have you got A+ in All subject?\n");
scanf("%d",&b);
printf("Are you Failed?\n");
scanf("%d",&c);

if(a&&b){
    printf("Congratulation for IPhone\n");
}
if(b){
    printf("You wil get a new bat\n");
}
if(a&&c){
 printf("play off from now\n");
}
else{
 printf("Everythings off from now\n");
}
return 0;
}