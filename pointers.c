#include <stdio.h>

void printAge(int *pAge){
    printf("Yor are %d years old !",*pAge);
}

int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable
    //           * = indirection operator (value at address)

    int age  = 21;

    int *pAge = &age;
    // int *pAge = NULL;
    // pAge = &age;

    printf("address of age: %p\n",&age);
    printf("address of pAge: %p\n",pAge);

    printf("size of age: %d bytes\n",sizeof(age));
    printf("size of pAge: %d bytes\n",sizeof(pAge));

    printf("value of age: %d\n",age);
    printf("value at stored address: %d\n",*pAge);

    printAge(pAge);

    return 0;
}
