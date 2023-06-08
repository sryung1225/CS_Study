#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string s = get_string("Before: ");
    printf("After: ");
    for(int i=0, n=strlen(s); i<n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){ // s[i]가 소문자
            printf("%c", s[i]-32); // 대문자로 변환
        } else {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
// ? Before: hELloWoRLd
// ? After: HELLOWORLD