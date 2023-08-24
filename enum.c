#include <stdio.h>

enum Day {Sun = 0, Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6};


int main(){

    //enum = a user defined type of named integer identifiers
    //       helps to make a program more readable
    enum Day today = Sat;

    // printf("%d",today);

    if ( today == Sun || today == Sat) {
        printf("holiday");
    } else {
        printf("working day");
    }


    return 0;
}
