#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *x;
    int *y;

    x = malloc(sizeof(int)); // 포인터 x 초기화
    y = x; // 포인터 y가 포인터 x와 동일한 곳을 가리키도록 초기화

    printf("%p\n", *&x); // ? 0x1792290
    printf("%p\n", *&y); // ? 0x1792290 // 동일한 곳을 가리키고 있음을 확인

    *x = 42;
    printf("%i\n", *x); // ? 42
    printf("%i\n", *y); // ? 42

    *y = 13;
    printf("%i\n", *x); // ? 13
    printf("%i\n", *y); // ? 13
}