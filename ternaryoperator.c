#include <stdio.h>

int findMax(int x, int y){
    return (x > y) ? x : y;
}

int main(int argc, char argv[]){

    // ternary operator shortcut to if/else
    // (condition) ? value if true : value if false

    int max = findMax(15,4);

    printf("%d\n", max);

    return 0;
}