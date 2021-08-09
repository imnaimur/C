#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool an_adult=true;
    bool has_nid=false;
    bool has_passport=true;

    printf("an_adult=true\n");
    printf("has_nid=flase\n");
    printf("has_passport=true\n");


    bool permitted=an_adult && has_nid;
    printf("permission:%d\n", permitted);

    bool has_identity= has_nid || an_adult;
    printf("permission granted:%d\n", has_identity);
    
    bool permission=(has_passport || has_nid) && an_adult;
    printf("permission:%d\n", permission);


    printf("using logical not an_adult=%d\n", !an_adult);
    printf("using logical not has_nid=%d\n", !has_nid);

    return 0;
}
/*
    Logical And(&&)
    ------------------
    A       B       result
    true    flase   flase
    flase   true    flase
    true    true    true
    flase   flase   flase

    Logical OR(||)
    -----------------
    A       B       Result
    true    flase   true
    flase   true    true
    true    true    true
    flase   flase   flase

    Logical NOT(!)
    -----------------
    A       Result
    true    flase
    flase   true
*/