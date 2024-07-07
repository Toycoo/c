#include <stdio.h>
#include <string.h>
// fixed the bug
int main(){
    
    char string1[] = "Bro";
    char string2[] = "code";

    strcat(string1, string2);


    printf("%s\n", string1);
    
    return 0;
}           