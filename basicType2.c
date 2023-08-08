#include <stdio.h>
#include <stdbool.h>

int main(){
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d  = integer

    // %.1 = decimal precision  小數點精度
    // %1 = minimum field width 增加往右留寬
    // %- = left align          改成從右往左留寬

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%10.2f\n", item1);
    printf("Item 2: $%10.2f\n", item2);
    printf("Item 3: $%10.2f\n", item3);

    return 0;
}
