#include <stdio.h>
#include <string.h>

int main(){

    //https://mycollegenotebook.medium.com/c-%E8%AA%9E%E8%A8%80%E7%AD%86%E8%A8%98-%E5%AD%97%E4%B8%B2-strings-ffe70ee5f5b8

    char name[25];
    int age;

    printf("what's your name?");
    //scanf("%s",&name);
    fgets(name,25,stdin);    //fgets(str, length of str, stream); 
    name[strlen(name)-1] = '\0'; //make the last index word change to the empty string

    printf("How old are you?");
    scanf("%d",&age);

    printf("hi,%s, what's up!",name);
    printf(" you are %d years old",age);

}