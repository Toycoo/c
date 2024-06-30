#include <stdio.h>
#include <string.h>

int main(){
    
    char string1[] = "Bro";
    char string2[] = "code";

    strcat(string1, string2);
    strncat(string1,string2,3);
    strcpy(string1,string2);
    strncpy(string1,string2,sizeof(string1));


    printf("%s\n", string1);
    
    return 0;
}           