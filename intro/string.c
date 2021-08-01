#include <stdio.h>
int main()
{
    char name[20]; //must declear how many character i want in defined variable
    name[0] = 'N'; //start from zero
    name[1] = 'A';
    name[2] = 'I';
    name[3] = 'M';
    name[4] = 'U';
    name[5] = 'R';
    printf("%s\n", name);
    char name2[20] ={'N', 'A', 'I', 'M'};
    printf("%s\n", name2);
    char name3[20]={"NAIMUR RAHMAN"}; //string shortcut which is much easier than previous
    printf("%s\n", name3);
    printf("Index 0=%c\n Index 7=%c\n Index 8=%c\n", name3[0], name3[7], name3[8]);
    char my_name[30];
    printf("what's Your name?\n");
    scanf("%s", &my_name);
    printf("%s\n",my_name);
    printf("Thank You, %s\n",my_name);
    return 0;
}    