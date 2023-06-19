#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
}
node;

int main(void){
    node *list = NULL; // 연결 리스트의 첫 번째 node 포인터 list. 현재 아무것도 가리키고 있지 않음

    node *n = malloc(sizeof(node)); // 새로운 node 포인터 n. 메모리 할당 완료
    if(n == NULL){
        return 1;
    }
    n -> number = 1; // node n 의 number 필드의 값으로 1 저장. (*n).number = 1; 과 동일
    n -> next = NULL; // node n의 next 값으로 NULL 저장
    list = n; // list 포인터를 n 포인터로 초기화
    

    n = malloc(sizeof(node)); // list에 다른 node를 더 연결하기 위해 n에 새로운 매모리 재할당
    if(n == NULL){
        return 1;
    }
    n -> number = 2; // node n의 number 값으로 2 저장
    n -> next = NULL; // node n의 next 값으로 NULL 저장
    list -> next = n; // node list의 next 값으로 n 저장. list의 다음 node로 n 포인터가 지정됨


    n = malloc(sizeof(node)); // list에 다른 node를 더 연결하기 위해 n에 새로운 매모리 재할당
    if(n == NULL){
        return 1;
    }
    n -> number = 3; // node n의 number 값으로 3 저장
    n -> next = NULL; // node n의 next 값으로 NULL 저장
    list -> next -> next = n; // node list의 다음 node의 다음 node로 n 포인터가 지정됨


    // list에 연결된 node들을 처음부터 방문하면서 각 number 출력
    // 마지막 node의 next에 NULL이 저장되어 있음을 루프의 종료 조건으로 활용
    for(node *tmp = list; tmp != NULL; tmp = tmp->next){
        printf("%i\n", tmp -> number);
    }
    // ? 1
    // ? 2
    // ? 3


    // (응용) 중간에 새로운 node 추가하기
    n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
    }
    n -> number = 5;
    n -> next = NULL;
    for(node *tmp = list; tmp != NULL; tmp = tmp -> next) {
        if(tmp -> number == 2) {
            n -> next = tmp -> next;
            tmp -> next = n;
            break;
        }
    }
    
    // 루프를 이용해 list에 연결된 node들 하나씩 출력해 확인
    for(node *tmp = list; tmp != NULL; tmp = tmp->next){
        printf("%i\n", tmp -> number);
    }
    // ? 1
    // ? 2
    // ? 5
    // ? 3


    // list에 연결된 node들을 처음부터 방문하면서 메모리 해제
    while(list != NULL){
        node *tmp = list -> next;
        free(list);
        list = tmp;
    }
}