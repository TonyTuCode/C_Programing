#include <stdio.h>

#define ROWS 2
#define COLS 3

int main(){

    //by define
    int prices[ROWS][COLS] = {{5, 6, 7},{3, 4, 5}};  //at least set 2d size
    int priceSizeUnlnow[2][3];
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            printf("%d\n",prices[i][j]);
        }
    }

    //by variables
    int nums[2][4] = {{1,3,5,7},{3,6,9,0}};
    int rows = sizeof(nums)/sizeof(nums[0]);
    int cols = sizeof(nums[0])/sizeof(nums[0][0]);

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                printf("%d\n",nums[i][j]);
            }
        }


    return 0;
}
