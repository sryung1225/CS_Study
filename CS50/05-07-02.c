#include <stdio.h>

void swap(int a, int b);

int main(void){
    int x = 1;
    int y = 2;
    printf("x is %i, y is %i\n", x, y); // ? x is 1, y is 2
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y); // ? x is 2, y is 1
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}