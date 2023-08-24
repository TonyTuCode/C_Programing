#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));  //srand(): gives the random function a new seed,
                     //       if gives same seed, get the same result
                     //time(0): gives the time in seconds since the Unix epoch, 
                     //         because it's a unpredictable seed

    for (int i = 0; i < 3; i++)
    {
        int num = rand() % 9;  //rand(): give a number 0 ~ 32767, %9 meaning result can be 0 ~ 9
        printf("%d\n",num);    
    }

    return 0;
}
