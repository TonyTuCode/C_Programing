#include<stdio.h>

/*
function prototypes:
Function declaration without a body, before main()
it helps: 
1. debugging
2. make sure function called by correct argument
3. Easier to navigate a program with main() at the top

Many C compilers do NOT check for parameter matching
,that's why there's no error put function after main() 
*/

int triangleArea(int length, int height);  //this is the function prototype

int main(){
    int area = triangleArea(3,4);
    printf("triangle area: %d",area);
    return 0;
}

int triangleArea(int length, int height){
   return length * height /2; 
}

