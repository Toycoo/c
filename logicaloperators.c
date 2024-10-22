#include <stdio.h>
#include <stdbool.h>



int main(){

    // logical operators:  
    // && (AND) checks if both conditions are true
    // || (OR) checks if at least one condition is true
    // ! (NOT) reverses the state of a condition



    float temp = 25;
    bool sunny = false;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("The weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }
}


