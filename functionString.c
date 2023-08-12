#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "AaaBbb";
    char str2[] = "CccDdd";

    strlwr(str1);               // to uppercase
    // strupr(str1);               // to lowercase
    // strcat(str1,str2);          // appends str2 to end of str1
    // strncat(str1,str2,2);       // appends n char from str2 to str1
    // strcpy(str1, str2);         // copy str2 to str1
    // strncpy(str1,str2,1);       // copy n chars from str2 to replace n str1 chars (from index 0)
    // strset(str1, '?');          // replace all chars by an input char  
    // strnset(str1, 'x', 2);      // replace n chars by an input char
    // strrev(str1);               // reverses a string  

    // printf("%s",str1);


    int result = strlen(str1);           // string length
    // int result = strcmp(str1,str2);      // string compare all chars, if 0 meaning the same
    // int result = strncmp(str1,str2,2);   // string compare n chars
    // int result = strcmpi(str1,str2);     // string compare all (ignore case)
    // int result = strnicmp(str1,str2);    // string compare n chars (ignore case)

    printf("%d",result);

    return 0;
}
