#include <stdio.h>

int main(){

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade){
    case 'A':
        printf("Perfect!");
        break;
    case 'B':
        printf("well done");
        break;
    case 'C':
        printf("Not that bad");
        break;
    case 'D':
        printf("You should do it better");
        break;
    default:
        printf("Invalid grades");
    }


}