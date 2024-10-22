#include <stdio.h>
#include <stdbool.h>

int main()
{

    printf("\'Hello\\World\' -- This \t is \t Tab");
    printf("\n");

    // variable = Allocated space in memory to store a value

    /* escape sequence */

    int x;                     // declaration
    x = 123;                   // initialization
    int y = 321;               // declaration + initialization

    int age = 21;              // integer %d
    float gpa = 2.05;          // floating point number %f
    char grade = 'C';          // single character %c
    char name[] = "Bro";       // array of characters %s

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    float c = 3.141592653589793;   // 4 bytes (32 bits of precision)-6,7 digits %f
    double d = 3.141592653589793;  // 8 bytes (64 bits of precision)-15,16 digits %lf
    
    bool e = true;                 // 1 byte (true or false) %d
    
    char f = 100;                  // 1 byte (-128 to +127) %d or %c in ASCII TABLE
    printf("The character is \'%c\'\n", f); // prints out the character "d"
    unsigned char g = 255;         // 1 byte (0 to +255) %d or %c

    short h = 32767;               // 2 bytes (-32,768 to +32,767) %d 
    unsigned short int i = 65535;  // 2 bytes (0 to +65,535) %d

    signed int j = 2147483647;    // 4 bytes (-2,147,483,648 to +2,147,483,648) %d 
    unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u   

    long long int l = 9223372036854775807;            // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U;  // 8 bytes (0 to +18 quintillion) %llu 'add U at the end'

    printf("%0.15f\n",c);  // less precision
    printf("%0.15lf\n",d);   // more accurate

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item1: $%5.2f\n", item1);
    printf("Item2: $%8.2f\n", item2);
    printf("Item3: $%8.2f\n", item3);

    //constants = fixed value that can not be changed by the program during its execution

    const float PI = 3.14159;

    //PI = 420.69; // will throw error

    printf("%f\n",PI);

    //arithmetic operations

    // + addition
    // - subtractions
    // + multiplication
    // / division
    // % modulus
    // ++ increment
    // -- decrement

    x = 5;
    y = 2;

    //augmented assignment operators

    x++; // x=x+1
    y++; // y=y+1
    y--; // y=y-1

    y+=2; // x=x+2 == 4
    x/=2; // x=x/2 == 2.5 rounded up to 3 because INT

    float z = x / (float) y; // (3/4)
    
    printf("X = %d and Y = %d and Z = %f\n", x,y,z);


return 0;
}
