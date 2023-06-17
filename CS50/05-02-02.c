#include <stdio.h>

// 비교용
int main(void){
    int n = 50;
    int *p = &n; // 포인터 변수 *p에 n의 주소를 저장
    printf("%p\n", &n);  // ? 0x7fff56c399c8
    printf("%p\n", p);   // ? 0x7fff56c399c8
    printf("%i\n", *&n); // ? 50
    printf("%i\n", *p);  // ? 50
}
