#include <stdio.h>

int main(int argc, char *argv[]){ // 파일명을 사용자로부터 입력 받음
    if(argc != 2){ // 파일명이 입력되지 않으면 종료
        return 1;
    }
    FILE*file = fopen(argv[1], "r"); // 파일 읽기(r)
    if(file == NULL){ // 파일이 제대로 열리지 않으면 종료
        return 1;
    }

    unsigned char bytes[3]; // 크기가 3인 문자배열 생성
    fread(bytes, 3, 1, file); // 파일에서 첫 3byte를 읽어옴
    if(bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff){
        printf("Maybe\n");
    } else {
        printf("No\n");
    }

    fclose(file); // 파일 닫기
}
