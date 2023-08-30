#include <stdio.h>

int main()
{
    
    FILE *pF = fopen("poem.txt","w");  // "w" meaning write mode

    fprintf(pF,"Roses are red, \nViolets are blue, \nSugar is sweet, \nAnd so are you.");

    fclose(pF);
    

//    if(remove("poem.txt") == 0){
//         printf("That file was deleted successfully !");
//    }
//    else{
//         printf("That file was NOT deleted !");
//    }

    return 0;
}
