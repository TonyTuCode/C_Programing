#include <stdio.h>
#include <string.h>

struct Player
{
    char name[30];
    int score;
};


int main(){

    // struct = collection of related members ("variables")
    //          very similar to "Class" in other language
    
    struct Player p1;
    struct Player p2;

    strcpy(p1.name, "Durant");
    p1.score = 27;

    strcpy(p2.name, "Curry");
    p2.score = 35;
    
    printf("%s\n",p1.name);
    printf("%d\n",p1.score);

    printf("%s\n",p2.name);
    printf("%d\n",p2.score);


    //struct array
    struct Player playerList[] = {p1, p2};
    for (size_t i = 0; i < sizeof(playerList)/sizeof(playerList[0]); i++)
    {
        printf("%s\n",playerList[i].name);
        printf("%d\n",playerList[i].score);
    }
    

    return 0;
}
