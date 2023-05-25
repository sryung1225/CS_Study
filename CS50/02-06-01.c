#include <cs50.h>
#include <stdio.h>

int main(void){
    float x = get_float("x: ");
    float y = get_float("y: ");

    printf("x / y = %.50f\n", x/y);
}

// ? x:
// > 1
// ? y:
// > 10
// ? x / y = 0.10000000149011611938476562500000000000000000000000