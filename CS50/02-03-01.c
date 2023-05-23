#include <stdio.h>

int main(void)
{
    int x = 3;
    int y = 5;
    if(x < y) {
        printf("x는 y보다 작다\n");
    } else if (x > y) {
        printf("x는 y보다 크다\n");
    } else { // x == y
        printf("x는 y와 크기가 같다\n");
    }
}