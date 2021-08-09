#include <stdio.h>
int main(){
    char c='A';
    short s=56;
    int i=642;
    long l=5487l;
    long long ll=78125785ll;
    printf("Size of char:%d\n", (int)sizeof(c));
    printf("Size of short:%hi\n", (int)sizeof(s));
    printf("Size of char:%d\n", (int)sizeof(i));
    printf("Size of char:%ld\n", (int)sizeof(l));
    printf("Size of char:%lld\n", (int)sizeof(ll));

    return 0;
}