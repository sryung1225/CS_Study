#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list = malloc(3*sizeof(int)); // 포인터 list를 선언하고 int 3개로 이루어진 메모리 할당
    if(list == NULL){ // 포인터 선언 재확인
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // list -> tmp 이사
    int *tmp = realloc(list, 4*sizeof(int)); // 포인터 tmp에 메모리를 할당하고 list의 값 복사
    if(tmp == NULL){
        return 1;
    }
    list = tmp; // list가 tmp와 같은 곳을 가리키도록 초기화
    tmp[3] = 4; // tmp[3] 할당
    
    for(int i=0; i<4; i++){ // 새로운 배열 list 확인
        printf("%i\n", list[i]);
    }
    free(list); // list의 메모리 초기화
}
// ? 1
// ? 2
// ? 3
// ? 4