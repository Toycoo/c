#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type

    double prices[5];
    prices[0] = 10.99;
    prices[1] = 15.99;
    prices[2] = 20.99;
    prices[3] = 25.99;
    prices[4] = 30.99;
    
    // accessing an element of an array using its index
    printf("%0.2lf", prices[4]);

    return 0;
}