#include <stdio.h>
#include <string.h> //string formattinh

int main()
{
    //accepting input from user

    char name[10];
    int age;


    printf("What's your name?\n");
    //scanf("%s", &name); //scanf doesn't capture spaces
    fgets(name, 10, stdin); //fgets reads white spaces, adds newline
    name[strlen(name)-1] = '\0'; //string formatting to remove newline


    printf("Hello %s, How old are you?\n", name);
    scanf("%d", &age);  // & refers to the address
    printf("you are %d years old", age);
    return 0;
}
