#include <stdio.h>

int main()
{
 
    FILE *pF = fopen("poem.txt","r"); // "r" meaning read mode

    char buffer[255];

    if (pF == NULL){
        printf("Unable to open file!\n");
    } 
    else 
    {
         while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s",buffer);
        }
    }


    
    
    return 0;
}
