#include <stdio.h>

void hello(char[], int); // function prototype aka declared function

int main (int argc, char *argv[]){

    // function prototypes
    // fuction declaration w/o a body before main()
    // ensures that calls to function are made with correct arguments

    // many c compilers don't check for parameter matching
    // missing arguments will result in unexpected behaviour
    // function prototypes causes the compiler to flag incorrect parameters

    char name[] = "Bro";
    int age = 21;

    hello(name, age);
    // hello(name, age);

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}
