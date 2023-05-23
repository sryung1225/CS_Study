#include <cs50.h>
#include <stdio.h>

int main(void) {
    int age = get_int("what's your age?\n");
    int days = age * 365;
    printf("Your are at least %i days old.\n", days);

    int price = get_float("What's the price?\n");
    printf("Your total is %f.\n", price * 1.0625);
    printf("Your total is %.2f.\n", price * 1.0625);
}

// ? What's your age?
// > 26
// ? Your are at least 9490 days old.
// ? What's the price?
// > 100
// ? Your total is 106.250000.
// ? Your total is 106.25.