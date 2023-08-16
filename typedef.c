#include <stdio.h>
#include <string.h>

typedef char name[25];

typedef struct 
{
    name username;
    int  userId;
    char password[12];
} User;  //need to declare struct name here


int main(){

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    User u1 = {"Tom",1,"1234xxx"};
    User u2 = {"Sam",1,"4321yyy"};

    printf("%s\n",u1.username);
    printf("%d\n",u1.userId);
    printf("%s\n",u1.password);

    printf("%s\n",u2.username);
    printf("%d\n",u2.userId);
    printf("%s\n",u2.password);

    return 0;
}
