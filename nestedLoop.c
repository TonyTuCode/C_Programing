#include <stdio.h>

int main(){

    int rows;
    int cols;
    char symbol;
    char symbol2;

    printf("rows: ");
    scanf("%d",&rows);

    printf("cols: ");
    scanf("%d",&cols);

    // scanf("%c");   // 
    // setbuf(stdin,NULL);  // clean last scanf cache

    printf("symbol: ");
    scanf("%c",&symbol);   // because this scanf() absorb \n from last scanf()

    for(int i = 1; i <= rows; i++){
        for (int j = 1; j <= cols; j++){
            printf("%c",symbol);
        }
        printf("\n");
    }

    return 0;
}