#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's your favorite animal?\n");
    printf("My favortie animal is %s.\n", answer);
}