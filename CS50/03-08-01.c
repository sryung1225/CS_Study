#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    if(argc == 2){
        printf("hello, %s\n", argv[1]);
    } else {
        printf("hello, world\n");
    }
}

// $ make 03-08-01 로 컴파일 후

// $ ./03-08-01 로 실행 명령어 입력 시
// ? hello, world
// argc = 1, argv[0] = "03-08-01"

// $ ./03-08-01 ryung 으로 실행 명령어 입력 시
// ? hello, ryung
// argc = 2, argv[0] = "03-08-01", argv[1] = "ryung"