#include <stdio.h>

int main(){
    //bitwise = special operators used in bit level programming

    // & = AND (both condition 1, result is 1)
    // | = OR  (any condition 1, result is 1)
    // ^ = XOR (both condition 1 / 0, result is 0, else 1)
    // << left shift
    // >> right shift

    int x = 6;   // 6 = 00000110
    int y = 12;  //12 = 00001100
    int z = 0;   // 0 = 00000000
    
    z = x & y;
    printf("AND = %d\n",z); //00000010

    z = x | y;
    printf("OR = %d\n",z);  //00001110

    z = x ^ y;
    printf("XOR = %d\n",z);  //00001100 

    z = x << 2;
    printf("SHIFT LEFT = %d\n", z);

    z = x >> 2;
    printf("SHIFT RIGHT = %d\n", z);


    return 0;
}