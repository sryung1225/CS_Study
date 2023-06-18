#include <cs50.h>
#include <stdio.h>

int main(void){
    string s = "EMMA";
    printf("%s\n", s);     // ? EMMA
    printf("%p\n", &s);    // ? 0x7fff9dab57d8
    printf("%p\n", s);     // ? 0x42ad5a
    printf("%p\n", &s[0]); // ? 0x42ad5a
}
