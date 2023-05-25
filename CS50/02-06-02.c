#include <cs50.h>
#include <stdio.h>

int main(void){
    double x = get_double("x: ");
    double y = get_double("y: ");

    printf("x / y = %.50f\n", x/y);
}

// ? x:
// > 1
// ? y:
// > 10
// ? x / y = 0.10000000000000000555111512312578270211815834045410