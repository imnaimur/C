#include <stdio.h>
int main()
{
    unsigned char a =120, b=10;
   
    //AND Operation
    unsigned char c=a & b;
    printf("AND Operation:%d\n", c); //8

    //OR Operation
    unsigned char d=a | b;
    printf("OR Operation:%d\n", d);
    
    //Complex Operation
    unsigned char e=~a;
    printf("Complex Operation:%d\n", e);
    unsigned char f=~b;
    printf("Complex Operation:%d\n", f);

    //X-OR Operation
    unsigned char xo=a^b;
    printf("XOR Operation:%d\n",xo);

    //Right Shift
    unsigned char rs1=a>>1;
    printf("Right Shift-1:%d\n",rs1);
    printf("Right Shift-2:%d\n", a>>2);
    printf("Right Shift-3:%d\n", a>>3);

    //Left Shift
    unsigned char ls1=a<<1;
    printf("Left Shift-1:%d\n",ls1);
    printf("Left Shift-2:%d\n", a<<2);
    printf("Left Shift-3:%d\n", a<<3);
    
    return 0;
}
/*
AND Operation(and gate)
----------------
a -->   0 1 1 1 1 0 0 0        120(10)
b -->   0 0 0 0 1 0 1 0        10(10)
ans-->  0 0 0 0 1 0 0 0        8(10)

OR Operation(or gate)
----------------
a -->   0 1 1 1 1 0 0 0        120(10)
b -->   0 0 0 0 1 0 1 0        10(10)
ans-->  0 1 1 1 1 0 1 0        126(10)

Complex Operation(not gate)
-------------------
a -->   0 1 1 1 1 0 0 0        120(10)
ans-->  1 0 0 0 0 1 1 1        135(10) 

b -->   0 0 0 0 1 0 1 0        10(10)
ans-->  1 1 1 1 0 1 0 1        245(10)

XOR Operation(X-OR gate=A bar B + B bar A)
---------------
a -->   0 1 1 1 1 0 0 0        120(10)
b -->   0 0 0 0 1 0 1 0        10(10)
ans-->  0 1 1 1 0 0 1 0        114(10)

Right Shift Operation
------------------------
A-->    0 1 1 1 1 0 0 0     120(10)
rs1-->  0 0 1 1 1 1 0 0     60(10)  
rs2-->  0 0 0 1 1 1 1 0     30(10)
rs3-->  0 0 0 0 1 1 1 1     15(10)   

Left Shift Operation
------------------------
A-->    0 1 1 1 1 0 0 0     120(10)
ls1-->  1 1 1 1 0 0 0 0     240(10)
ls2-->  1 1 1 0 0 0 0 0     224(10)
ls3-->  1 1 0 0 0 0 0 0     192(10)
*/