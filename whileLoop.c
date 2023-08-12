#include <stdio.h>
#include <string.h>

int main(){
    
    char name[25];

    printf("What's your name? ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Pardon? ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("hi %s, nice to meet you",name);

    return 0;
}
