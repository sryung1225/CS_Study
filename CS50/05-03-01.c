#include <cs50.h>
#include <stdio.h>

int main(void){
    string s1 = "EMMA";
    printf("%s\n", s1);  // ? EMMA
    printf("%p\n", &s1); // ? 0x7fff9dab57d8
    
    char *s2 = "EMMA";
    printf("%s\n", s2);  // ? EMMA
    printf("%p\n", &s2); // ? 0x7ffc39444c00
}