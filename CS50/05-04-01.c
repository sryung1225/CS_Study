#include <cs50.h>
#include <stdio.h>

int main(void){
    string s = "EMMA";
    printf("%s\n", s);      // ? EMMA
    printf("%p\n", s);      // ? 0x42ad5a

    printf("%p\n", &s[0]);  // ? 0x42ad5a
    printf("%p\n", &s[1]);  // ? 0x42ad5b
    printf("%p\n", &s[2]);  // ? 0x42ad5c
    printf("%p\n", &s[3]);  // ? 0x42ad5d

    printf("%c\n", *s);     // ? E
    printf("%c\n", *(s+1)); // ? M
    printf("%c\n", *(s+2)); // ? M
    printf("%c\n", *(s+3)); // ? A
}
