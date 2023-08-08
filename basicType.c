#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int age = 20;
    
    float gpa = 2.1;              // 4 bytes (32bits) 6 - 7 digits %f
    double pi = 3.14;  // 8 bytes (64bits) 15 - 16 digits %lf
    const double pi = 3.1415926535897;  // constant = fixed value that cannot be altered by the program 
    
    char grade = 'C';       // single character %c
    char name[] = "Gaga";   // array of characters(like string) %s
    
    bool isReal = true;     // 1 byte (true or false) %d

    //unsigned: shift all minus to plus
    char c1 = 65;             // 1 byte (-2^7 to 2^7 -1) %d(ascii十進位數) or %c(ascii符號)
    unsigned char uc1 = 255;  // 1 byte   (0 to 2^8 -1) %d or %c

    short sh1 = 32767;        // 2 bytes (-2^15 to 2^15 -1) %d
    unsigned ush1 = 65535;    // 2 bytes (0 to 2^16 -1)     %d

    int i1 = 2147483647;      // 4 bytes (-2^31 to 2^31 -1) %d
    int ui1 = 4294967295;     // 4 bytes (0 to 2^32 -1)     %d

    long long int l1 = 9223372036854775807;              // 8 bytes(-2^63 to 2^63-1)
    unsigned long long int ul1 = 18446744073709551615U;  // 8 bytes(0 to 2^64-1)

    printf("hello %s \n",name);
    printf("You are %d years old \n",age);
    printf("Your grade is %c\n",grade);
    printf("And your gpa is %f\n",gpa);
    printf("pi is %lf\n",pi);
    printf("c1 in d is %d\n",c1);
    printf("c1 in c is %c\n",c1);
    printf("sh1 is %d\n",sh1);
    printf("i1 is %d\n",i1);  

    return 0;
}