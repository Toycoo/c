#include <stdio.h>

/**
 * @brief Calculates the square of a given number.
 *
 * This function takes a double precision floating point number as input and returns its square.
 *
 * @param x The number whose square is to be calculated.
 * @return The square of the input number.
 */
double square(double x) {
    double result = x * x; 
    return result;
}

int main(int argc, char *argv[])
{
    
    double x = square(3.14);
    printf("The square of 3.14 is %lf\n", x);


    printf("argc: %d\n", argc);
    printf("argv[0]: %s\n", argv[0]);

    return 0;
}