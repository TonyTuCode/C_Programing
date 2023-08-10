#include <stdio.h>

int main(){

    // && (AND) check if two conditions are true
    // || (OR)  check if at least one conditions is true
    //  ! (NOT) reverses the state of a condition

    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age >= 20){
        printf("You are an adult");
    }
    else if (age < 20 && age > 12) {
        printf("You are a teenager");
    } else {
        printf("You are too young!");
    }


}