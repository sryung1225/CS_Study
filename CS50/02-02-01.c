#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's yout name?\n");
    printf("hello, %s\n", answer);
}