#include <stdio.h>

int main(){

    // printf("Size of char data type: %u\n",sizeof(char)); 
    // printf("Size of int data type: %u\n",sizeof(int)); 
    // printf("Size of float data type: %u\n",sizeof(float)); 
    // printf("Size of double data type: %u\n",sizeof(double)); 
    
    double prices[] = {5.0, 6.0};
    double priceSizeUnlnow[5];

    // printf("%d bytes\n",sizeof(prices));

    for (int index = 0; index < sizeof(prices) / sizeof(double); index++){
        printf("$%.2lf\n",prices[index]);
    }

    return 0;
}
