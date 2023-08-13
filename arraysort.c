#include <stdio.h>

void sort(int array[], int size){

    for(int i = 0; i < size -1; i++){
        for (int j = 0; j < size -1; j++)
        {
            if(array[j] > array[j+1]){
                int tempSpace = array[j];
                array[j] = array[j+1];
                array[j+1] = tempSpace;
            }
            printArr(array,size);
        }
    }
}

void printArr(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}


int main(){
    int intArr[] = {5,3,2,4,1};
    int size = sizeof(intArr)/sizeof(intArr[0]);
    sort(intArr, size);
    return 0;
}
