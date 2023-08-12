#include <stdio.h>

void goodMorning(){
    printf("\nGood morning");
}

void greeting(char moment[]){
    printf("\nGood %s",moment);
}

int timer(int clock){
    printf("\nIt's %d o'clock",clock);
}

int main(){
    goodMorning();
    char moment[] = "evening";
    greeting(moment);
    timer(5);
    return 0;
}

