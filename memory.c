#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    short a = 'a';
    char b = 'b';
    char c[3];

    printf("%d bytes\n",sizeof(a));
    printf("%d bytes\n",sizeof(b));
    printf("%d bytes\n",sizeof(c));
    
    printf("a address: %p\n",&a);
    printf("b address: %p\n",&b);
    printf("c address: %p\n",&c);

    return 0;
}
